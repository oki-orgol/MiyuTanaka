#include <iostream>
#include <random>
#include "Define.cpp"

using namespace std;


int main()
{
    random_device random;
    mt19937 gen(random());
    uniform_int_distribution<> dist(Define::MIN, Define::MAX);

    int number[Define::SIZE];
    int result[Define::SIZE];
    int numMemory = 0;
    int numIndex = 0;

    for(int i = 0; i < Define::SIZE; ++i)
    {
        number[i] = dist(gen);
    }

    cout << "ソート前の数字\n";
    for(int i = 0; i < Define::SIZE; ++i)
    {
       cout << "  " << number[i]; 
    }
    cout << endl;

    // ソート
    result[0] = number[0];
    for (int i = 1; i < Define::SIZE; ++i)
    {
        int num = number[i]; // 挿入する値
        int index = i; // 挿入する場所を入れる
        for (int j = 0; j < i; ++j) // 既にソート済みの部分だけ
        {
            int target = result[j]; // 現在確認中の値
            if (num < target) // 確認中の値より挿入したい値が小さいなら
            {
                index = j; // 挿入する場所を記憶
                break; // やめ
            }
        }

        for (int j = i; j > index; --j)
        {
            result[j] = result[j - 1];
        }


        result[index] = num;

    }

    cout << "ソート後の数字\n";
    for(int i = 0; i < Define::SIZE; ++i)
    {
        cout << "  " << result[i];
    }
    cout << endl;

    return 0;
}