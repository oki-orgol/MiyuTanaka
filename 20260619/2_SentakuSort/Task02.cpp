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

    for(int i = 0; i < Define::SIZE; ++i)
    {
        number[i] = dist(gen);
    }

    cout << "ソート前の数字\n";
    for(int i = 0; i < Define::SIZE; ++i)
    {
       cout << number[i] << "\n"; 
    }

    for(int i = 0; i < Define::SIZE; ++i)
    {
        int minNumber = INT_MAX;
        int minIndex = -1;

        // 配列内の最小要素を探索
        for(int j = 0 + i; j < Define::SIZE; ++j)
        {
            if(number[j] < minNumber)
            {
                // 最小要素と最小要素の位置を保存
                minNumber = number[j];
                minIndex = j;
            }
        }
        // 最小要素と最初の要素を交換
        if(minIndex >= 0)
        {
            number[minIndex] = number[i];
            number[i] = minNumber;
        }
    }

    cout << "ソート後の数字\n";
    for(int i = 0; i < Define::SIZE; ++i)
    {
        cout << number[i] << "\n";
    }

    cout << endl;
    return 0;
}