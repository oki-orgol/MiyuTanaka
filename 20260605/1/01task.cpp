#include<iostream>
using namespace std;
// ループを2つ使って最小値・最大値とそれぞれの座標を出力する

int main(void)
{
    int a[10][10] =
    {
        {  5,364,251,751,705,847,491,121, 82,938},
        {303,265,674,868, 92,194,954,244,350,980},
        {952,153,440,475,908,652,410,719,367,761},
        {737,732,217,842,358,764,464,570,672,693},
        {467, 57,590,256,151,891,557,536,219,729},
        {653, 33,756, 98,815,358,129,403,610,807},
        {729, 64,306,677,603,712,582,375,317,326},
        {792,854,524, 76,197,745,533, 61,869,230},
        {440,174,672,845,795,667,886,677,782,761},
        {838,813,898,383,651,186,393,305,731,666}
    };

    int size = 10;
    int minVal = a[0][0];
    int maxVal = a[0][0];
    int minPosX = 0;
    int minPosY = 0;
    int maxPosX = 0;
    int maxPosY = 0;
    

    for (int y = 0; y < size; ++y)
    {
        for (int x = 0; x < size; ++x)
        {
            if (a[y][x] < minVal)
            {
                minVal = a[y][x];
                minPosX = x;
                minPosY = y;
            }
            if (a[y][x] > maxVal)
            {
                maxVal = a[y][x];
                maxPosX = x;
                maxPosY = y;
            }
        }
    }

    cout << "最小値: "  << minVal <<"    座標x: " << minPosX << "  座標y: " << minPosY
         << "\n最大値: " << maxVal << "  座標x: " << maxPosX << "  座標y: " << maxPosY
         << endl;

}