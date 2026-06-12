#include <iostream>
using namespace std;
// カラーコード#2DBE60のそれぞれの赤・緑・青の要素を10進数で出力

int main(void)
{
    int red = 0;
    int green = 0;
    int blue = 0;
    const int COLOR_CODE = 0x2DBE60;
    const int COLOR_RED_SHIFT = 16;
    const int COLOR_GREEN_SHIFT = 8;

    red = COLOR_CODE & 0xFF0000;
    red = red >> COLOR_RED_SHIFT; 

    green = COLOR_CODE & 0x00FF00;
    green = green >> COLOR_GREEN_SHIFT;
    
    blue = COLOR_CODE & 0x0000FF;


   cout << "赤 " << red << "\n緑 " << green << "\n青 " << blue << endl;
}