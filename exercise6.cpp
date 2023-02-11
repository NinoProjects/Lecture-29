#include<iostream>
#include <cmath>

using namespace std;

int numExponent (int num, int exponent){
    int result = 1;
    for (int i = 0; i < exponent; i = i + 1){
    result = result * num;
    }
    return result;
    
}


int main()
{

    int sixExpoFive = numExponent (6, 5);
    cout << sixExpoFive;
    
    return 0;
}
