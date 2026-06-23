#include <iostream>
#include "Define.cpp"

using namespace std;


// 1以上100以下の、3と5の公倍数を出力
int main()
{
    for (int i = Define::FIRST_NUMBER; i <= Define::LAST_NUMBER; i++)
    {
        if (i % Define::CONDITION_NUMBER1 == 0 && i % Define::CONDITION_NUMBER2 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}