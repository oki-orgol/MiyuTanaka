#include<iostream>
using namespace std;
// 10から1まで、順番に出力

int main(void)
{
    const int FIRST_NUMBER = 10;
    const int LAST_NUMBER = 1;

    for (int i = FIRST_NUMBER; i >= LAST_NUMBER; i--)
    {
        cout << i << endl;
    }
}