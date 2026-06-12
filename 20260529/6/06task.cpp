#include <iostream>
using namespace std;
// 1以上100以下の、7の倍数を出力

int main(void)
{
    const int FIRST_NUMBER = 1;
    const int LAST_NUMBER = 100;
    const int CONDITION_NUMBER = 7;

    for (int i = FIRST_NUMBER; i <= LAST_NUMBER; i++)
    {
        if (i % CONDITION_NUMBER == 0)
        {
            cout << i << endl;
        }
    }
}