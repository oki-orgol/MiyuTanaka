#include <iostream>
#include "Define.cpp"

using namespace std;
// 定価1500円の本を購入するときの、消費税と合計金額を出力

int main()
{
    float totalPrice = 0.0f;
    float tax = 0.0f;

    tax = Define::BOOK_PRICE * Define::TAX_RATE;
    totalPrice = Define::BOOK_PRICE + tax;

    cout << "消費税 " << tax << "円" << "\n合計金額 " << totalPrice << "円" << endl; 

    return 0;
}