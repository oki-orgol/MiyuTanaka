#include <iostream>
using namespace std;
// 定価1500円の本を購入するときの、消費税と合計金額を出力

int main()
{
    const float BOOK_PRICE = 1500.0f;
    const float TAX_RATE = 0.1f;
    float totalPrice = 0.0f;
    float tax = 0.0f;

    tax = BOOK_PRICE * TAX_RATE;
    totalPrice = BOOK_PRICE + tax;

    cout << "消費税 " << tax << "円" << "\n合計金額 " << totalPrice << "円" << endl; 

    return 0;
}