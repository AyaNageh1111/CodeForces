#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    string stones;
    cin >> stones;
    int red = 0, g = 0, b = 0;
    for (int i = 1; i < num; i++) 
    {
        if (stones[i - 1] == stones[i])
            if (stones[i] == 'R')
                ++red;
            else if (stones[i] == 'G') {
                ++g;
            }
            else if (stones[i] == 'B')
                ++b;
    }
    cout << red + g + b;

}