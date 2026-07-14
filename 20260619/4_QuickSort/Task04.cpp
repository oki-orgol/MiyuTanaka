#include <iostream>
#include <random>
#include "Define.cpp"

using namespace std;


vector<int> calc(vector<int> num)
{
    int pivot = 0;// 閾値
    vector<int> biggerArray = {};
    vector<int> smallerArray = {};
    vector<int> pivotArray = {};

    // 閾値(Pivot)を決める
    for (int i = 0; i < num.size(); ++i)
    {
        pivot += num[i];
    }
    pivot /= num.size();

    for (int i = 0; i < num.size(); ++i)
    {
        // pivotより大きい数字
        if (num[i] > pivot)
        {
            biggerArray.push_back(num[i]);
        }
        // pivotより小さい数字(未満)
        else if (num[i] < pivot)
        {
            smallerArray.push_back(num[i]);
        }
        // pivotと同じ数字
        else
        {
            pivotArray.push_back(num[i]);
        }
    }

    vector<int> smallerResult = {};
    if (smallerArray.size() <= 1)// 要素数が1で終了
    {
        smallerResult = smallerArray;
    }
    else // 要素数が2以上で繰り返す
    {
        smallerResult = calc(smallerArray); // 再帰処理
    }
    // ↑smallerResultが確定

    vector<int> biggerResult = {};
    if (biggerArray.size() <= 1)// 要素数が1で終了
    {
        biggerResult = biggerArray;
    }
    else // 要素数が2以上で繰り返す
    {
        biggerResult = calc(biggerArray); // 再帰処理
    }
    // ↑biggerResultが確定

    vector<int> returnResult = {};

    // smallerResultを追加
    returnResult = smallerResult;

    // pivotArreyを追加
    for (int i = 0; i < pivotArray.size(); ++i)
    {
        returnResult.push_back(pivotArray[i]);
    }

    // biggerResultを追加
    for (int i = 0; i < biggerResult.size(); ++i)
    {
        returnResult.push_back(biggerResult[i]);
    }

    return returnResult;
}


int main()
{
    random_device random;
    mt19937 gen(random());
    uniform_int_distribution<> dist(Define::MIN, Define::MAX);

    vector<int> number = {};
    vector<int> result = {};

    for(int i = 0; i < Define::SIZE; ++i)
    {
        number.push_back(dist(gen));
    }

    cout << "ソート前の数字\n";
    for(int i = 0; i < number.size(); ++i)
    {
       cout << "  " << number[i]; 
    }
    cout << endl;

    // ソート
    result = calc(number);

    cout << "ソート後の数字\n";
    for(int i = 0; i < result.size(); ++i)
    {
        cout << "  " << result[i];
    }
    cout << endl;

    return 0;
}