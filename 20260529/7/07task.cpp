#include <iostream>
#include "Define.cpp"

using namespace std;


// 1以上100未満の、4の倍数を出力
int main()
{
    for (int i = Define::FIRST_NUMBER; i < Define::LAST_NUMBER; i++)
    {
        if (i % Define::CONDITION_NUMBER == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}