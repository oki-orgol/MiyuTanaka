#include <iostream>
#include "Define.cpp"

using namespace std;


// 1以上100以下の、50以上の偶数を出力
int main()
{
    for (int i = Define::FIRST_NUMBER; i <= Define::LAST_NUMBER; i++)
    {
        if (i >= Define::TARGET_NUMBER && i % Define::EVEN_NUMBER == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}