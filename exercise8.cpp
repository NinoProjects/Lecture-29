#include<iostream>

using namespace std;

int max_two (int num1, int num2){
    int maximal;
    if(num1 > num2){
        maximal = num1;
    }
    else{
        maximal = num2;
    }
    return maximal;
}


int main()
{
    int num1, num2;
    cout << "sheiyvane ricxvebi: ";
    cin >> num1 >> num2;
    
    cout << "maqsimaluri ricxvi am or ricxvs shoris aris: " << max_two (num1, num2);
    
    return 0;
    
    
    
}
