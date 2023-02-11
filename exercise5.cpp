#include<iostream>

using namespace std;

void calculator(int num,int num2,int result){
	char op;
	cout << "Enter Number: " ;
	cin >> num;
	cout << "Enter operator +,-,*,/,^  : ";
	cin >> op;
	cout << "Enter second number: " ;
	cin >> num2;
    if(op == '+') result = num + num2;
	if(op == '-') result = num - num2;
	if(op == '*') result = num * num2;
	if(op == '/') result = num / num2;
	if(op == '^') result = num ^ num2;
	cout << "result: " << result <<"\n";
}


int main()
{
	int a,b,c;
    calculator(a,b,c);
    return 0;
}
