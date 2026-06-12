#include <iostream>
using namespace std;
// 1以上100以下の、50以上の偶数を出力

int main(void)
{
    const int FIRST_NUMBER = 1;
    const int LAST_NUMBER = 100;
    const int TARGET_NUMBER = 50;
    const int EVEN_NUMBER = 2;

    for (int i = FIRST_NUMBER; i <= LAST_NUMBER; i++)
    {
        if (i >= TARGET_NUMBER && i % EVEN_NUMBER == 0)
        {
            cout << i << endl;
        }
    }
}