#include<iostream>

using namespace std;

int numSum (int num){
    int sum = 0;
    for(int i = num; i > 0; i--){
        sum = sum + i;
    }
    
    return sum;
}


int main()
{
    int num, sum;
    cout << "sheiyvane ricxvi: ";
    cin >> num;
    
    cout << numSum(num);
    
    return 0;
    
    
    
}
