#include <iostream>
#include <cmath>

using namespace std;

int fibonacci (int n) {
    int i = 3;
    int j = 1;
    int k = 1;
    int sum = 0;
    if (n <= 2) {
        return 1;
        } else {
            while(i < n +1){
            sum = j + k;
            j = k;
            k = sum;
            i++;
            }
        }
    return sum;
}


int main() {

    int n;
    cout << "sheiyvane ricxvi: ";
    cin >> n;
    cout << fibonacci (n);
    
   
   return 0;
}