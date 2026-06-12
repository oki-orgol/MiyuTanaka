#include <iostream>
using namespace std;
// 1以上10以下の、3の倍数ではない値を出力

int main()
{
    const int FIRST_NUMBER = 1;
    const int LAST_NUMBER = 10;
    const int CONDITION_NUMBER = 3;

    for (int i = FIRST_NUMBER; i <= LAST_NUMBER; i++)
    {
        if (i % CONDITION_NUMBER != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}