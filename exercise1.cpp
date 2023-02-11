#include <iostream>

using namespace std;


int calctulateSum(int num1, int num2) {
    string calculation;
    cout << "which calculation do you need?" <<endl;
    cin >> calculation;
    if(calculation == "sum"){
    return num1+num2;
    }else if(calculation == "minus") {
    return num1-num2;
    } else if (calculation == "divide") {
    return num1/num2;
    } else if (calculation == "multiply") {
    return num1*num2;
    } else {
        cout << "pick a right calculation" <<endl;
        return 0;
    }
}


int main() {

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << calctulateSum (num1, num2);
   
   return 0;
}