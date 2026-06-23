#include <iostream>
#include "Define.cpp"

using namespace std;
// カラーコード#2DBE60のそれぞれの赤・緑・青の要素を10進数で出力

int main(void)
{
    int red = 0;
    int green = 0;
    int blue = 0;

    red = Define::COLOR_CODE & 0xFF0000;
    red = red >> Define::COLOR_RED_SHIFT; 

    green = Define::COLOR_CODE & 0x00FF00;
    green = green >> Define::COLOR_GREEN_SHIFT;
    
    blue = Define::COLOR_CODE & 0x0000FF;


   cout << "赤 " << red << "\n緑 " << green << "\n青 " << blue << endl;

   return 0;
}