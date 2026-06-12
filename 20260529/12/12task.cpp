#include <iostream>
using namespace std;
// 定価200円、会員価格150円のジュースで、それぞれの消費税と合計金額を出力

int main(void)
{
    const float REGULAR_PRICE = 200.0f;
    const float MEMBER_PRICE = 150.0f;
    const float TAX_RATE = 0.1f;
    float regularTotalPrice = 0.0f;
    float memberTotalPrice = 0.0f;
    float regularTax = 0.0f;
    float memberTax = 0.0f;

    regularTax = REGULAR_PRICE * TAX_RATE;
    memberTax = MEMBER_PRICE * TAX_RATE;

    regularTotalPrice = REGULAR_PRICE + regularTax;
    memberTotalPrice = MEMBER_PRICE + memberTax;

    cout << "定価 消費税 "  << regularTax << "円\n" << "定価 合計金額 " << regularTotalPrice << "円\n\n" 
         << "会員価格 消費税 "  << memberTax << "円\n" <<  "会員価格 合計金額 " << memberTotalPrice << "円" << endl;
}