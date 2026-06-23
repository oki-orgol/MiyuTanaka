#include <iostream>
#include "Define.cpp"

using namespace std;


// 1以上10以下の、6以上の値を出力
int main()
{
    for (int i = Define::FIRST_NUMBER; i <= Define::LAST_NUMBER; i++)
    {
        if (i >= Define::TARGET_NUMBER)
        {
            cout << i << endl;
        }
    }

    return 0;
}