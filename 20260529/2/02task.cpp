#include <iostream>
#include "Define.cpp"

using namespace std;


// 10から1まで、順番に出力
int main()
{
    for (int i = Define::FIRST_NUMBER; i >= Define::LAST_NUMBER; i--)
    {
        cout << i << endl;
    }

    return 0;
}