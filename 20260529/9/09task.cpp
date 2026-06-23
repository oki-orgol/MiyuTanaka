#include <iostream>
#include "Define.cpp"

using namespace std;


// 1以上100以下の、10もしくは15の倍数を出力
int main()
{
    for (int i = Define::FIRST_NUMBER; i <= 100; i++)
    {
        if (i % Define::CONDITION_NUMBER1 == 0 || i % Define::CONDITION_NUMBER2 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}