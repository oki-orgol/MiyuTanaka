#include<iostream>
using namespace std;
// 1から10まで、順番に出力

int main(void)
{
    const int FIRST_NUMBER = 1;
    const int LAST_NUMBER = 10;

    for (int i = FIRST_NUMBER; i < LAST_NUMBER+1; ++i)
    {
        cout << i << endl;
    }
}
