#include <iostream>
#include <stack>
#include <utility>
#include <vector>
#include <algorithm>
#include "Define.cpp"
#include "Position.cpp"

using namespace std;
// DFS 深さ優先探索

// 今いる場所(pos)の周り(上右下左)を調べて、進める道のリストを返す関数
vector<Position> searchNextPositions(const Position& pos)
{
    vector<Position> result; // 進める場所のリスト

    vector<Position> checkPos = 
    {
        {pos.y, pos.x - 1}, // 上
        {pos.y + 1, pos.x}, // 右
        {pos.y, pos.x + 1}, // 下
        {pos.y -1, pos.x} // 左
    };

    // 行ける方向を探す
    for(int i = 0; i < checkPos.size(); ++i)
    {
        Position target = checkPos[i]; // チェック対象の座標

        // 迷路の範囲外へのアクセスを防ぐガード
        if (target.y < 0 || target.y >= Define::WIDTH || target.x < 0 || target.x >= Define::HEIGHT)
        {
            continue;
        }

        // もしその座標のマップデータがROADだったら
        if(Define::MAP[target.y][target.x] == MapType::ROAD)
        {
            result.push_back(target); // 進める場所リストに追加
        }
    }

    return result; // 進める場所リストを更新
}

int main()
{
    // 既に行った場所リスト
    vector<Position> memory;
    // 次に行く候補場所リスト
    stack<Position> next; 
    // 看板メモ（どこからきた）
    Position parentPos[Define::HEIGHT][Define::WIDTH];
    for (int y = 0; y < Define::HEIGHT; ++y)
    {
        for (int x = 0; x < Define::WIDTH; ++x)
        {
            parentPos[y][x] = {-1, -1};
        }
    }

    next.push(Define::START_POS); // スタート地点から
    bool goalReached = false; // ゴールに到達したかどうか

    // ルールは　上右下左

    // 次に行く候補が残っている間、繰り返し
    while (!next.empty())
    {
        // 現在地を次の地点に設定
        Position currentPos = next.top();
        next.pop();

        // 訪問済みならスキップ
        bool isVisited = false;
        for (Position memPos : memory)
        {
            // もしその場所が行ったことがある（既に行った場所リストにある）なら
            if (memPos.y == currentPos.y && memPos.x == currentPos.x)
            {
                isVisited = true;
                break;
            }
        }

        // スキップして次の候補へ
        if (isVisited)
        {
            continue;
        }

        // 現在状況
        std::cout << "探索中... y:" << currentPos.y << " x:" << currentPos.x << endl;

        // 未訪問の場合↓----------------------------

        // 訪問済みリストに追加
        memory.push_back(currentPos);

        // ここはゴール？
        if (currentPos.y == Define::GOAL_POS.y && currentPos.x == Define::GOAL_POS.x)
        {
            goalReached = true;
            break;
        }

        // 現在地から行ける場所を探す
        vector<Position> nextPos = searchNextPositions(currentPos); // 一時置き場

        for (int i = (int)nextPos.size() -1; i >= 0; --i)
        {
            Position nP = nextPos[i];

            // 訪問済みですか？
            bool nextVisited = false;
            for (Position memPos : memory)
            {
                if (memPos.y == nP.y && memPos.x == nP.x)
                {
                    nextVisited = true;
                    break;
                }
            }

            // 未訪問でした
            if (!nextVisited)
            {
                // 行先候補リストに追加
                next.push(nP);

                // 看板設置(この場所は今いる場所から行けます)
                parentPos[nP.y][nP.x] = currentPos;
            }
        }
    }
   
    if (goalReached)
    {
        // 正解ルート
        stack<Position> result;
        // ゴールからスタート
        Position pos = Define::GOAL_POS;

        // 看板が初期値(-1,-1)にぶつかるまで、逆走
        while (pos.x != -1 && pos.y != -1)
        {
            result.push(pos);
            pos = parentPos[pos.y][pos.x]; 
        }

        std::cout << "\n\n\n正解ルートは" << endl;
        while (!result.empty())
        {
            std::cout << "y:" << result.top().y << " x:" << result.top().x << endl;
            result.pop();
        }
    }
    else
    {
         std::cout << "ゴールに到達できませんでした" << endl;
    }

    return 0;
}