#include <iostream>

using namespace std;

void addNumbers (int num1, int num2) {
    int sum = num1 + num2;
    cout << sum;
}


int main() {

    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    addNumbers (num1, num2);
   
   return 0;
}