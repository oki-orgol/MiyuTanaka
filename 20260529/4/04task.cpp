#include <iostream>
using namespace std;
// 1以上10以下の、2の倍数を出力

int main()
{
    const int FIRST_NUMBER = 1;
    const int LAST_NUMBER = 10;
    const int EVEN_NUMBER = 2;

    for (int i = FIRST_NUMBER; i <= LAST_NUMBER; i++)
    {
        if (i % EVEN_NUMBER == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
