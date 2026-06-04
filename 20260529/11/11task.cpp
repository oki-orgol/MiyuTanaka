#include<iostream>
using namespace std;
// 定価1500円の本を購入するときの、消費税の合計金額を出力

int main(void)
{
    float answer = 0.0f;
    const float BOOK_PRICE = 1500.0f;
    const float TAX = 0.08f;

    answer = BOOK_PRICE + BOOK_PRICE * TAX;

    cout << answer << endl; 
}