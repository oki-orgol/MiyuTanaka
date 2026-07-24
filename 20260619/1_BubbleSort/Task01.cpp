#include <iostream>
#include <random>
#include "Define.cpp"

using namespace std;


int main()
{
    random_device random;
    mt19937 gen(random());
    uniform_int_distribution<> dist(Define::MIN, Define::MAX);
    
    int number[Define::SIZE];
    int save = 0;

    for(int i = 0; i < Define::SIZE; ++i)
    {
        number[i] = dist(gen);
    }

    cout << "ソート前の数字\n";
    for(int i = 0; i < Define::SIZE; ++i)
    {
       cout << "  " << number[i]; 
    }
    cout << endl;

    for(int i = 0; i < Define::SIZE; ++i)
    {
        for(int j = 0; j < Define::SIZE -1 - i; ++j)
        {
            if(number[j] > number[j+1])
            {
                save = number[j];
                number[j] = number[j+1];
                number[j+1] = save;
            }
        }
    }

    cout << "ソート後の数字\n";
    for(int i = 0; i < Define::SIZE; ++i)
    {
        cout << "  " << number[i];
    }

    cout << endl;
    return 0;
}