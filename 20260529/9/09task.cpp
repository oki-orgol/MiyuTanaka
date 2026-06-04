#include<iostream>
using namespace std;
// 1以上100以下の、10もしくは15の倍数を出力

int main(void)
{
    const int FIRST_NUMBER = 1;
    const int LAST_NUMBER = 100;
    const int CONDITION_NUMBER1 = 10;
    const int CONDITION_NUMBER2 = 15;

    for (int i = FIRST_NUMBER; i <= 100; i++)
    {
        if (i % CONDITION_NUMBER1 == 0 || i % CONDITION_NUMBER2 == 0)
        {
            cout << i << endl;
        }
    }
}