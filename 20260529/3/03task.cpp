#include<iostream>
using namespace std;
// 1以上10以下の、6以上の値を出力

int main(void)
{
    const int FIRST_NUMBER = 1;
    const int LAST_NUMBER = 10;
    const int TARGET_NUMBER = 6;

    for (int i = FIRST_NUMBER; i <= LAST_NUMBER; i++)
    {
        if (i >= TARGET_NUMBER)
        {
            cout << i << endl;
        }
    }
}