#include <iostream>
#include "Define.cpp"

using namespace std;
// 定価200円、会員価格150円のジュースで、それぞれの消費税と合計金額を出力

int main()
{
    float regularTotalPrice = 0.0f;
    float memberTotalPrice = 0.0f;
    float regularTax = 0.0f;
    float memberTax = 0.0f;

    regularTax = Define::REGULAR_PRICE * Define::TAX_RATE;
    memberTax = Define::MEMBER_PRICE * Define::TAX_RATE;

    regularTotalPrice = Define::REGULAR_PRICE + regularTax;
    memberTotalPrice = Define::MEMBER_PRICE + memberTax;

    cout << "定価 消費税 "  << regularTax << "円\n" << "定価 合計金額 " << regularTotalPrice << "円\n\n" 
         << "会員価格 消費税 "  << memberTax << "円\n" <<  "会員価格 合計金額 " << memberTotalPrice << "円"
         << endl;

    return 0;
}