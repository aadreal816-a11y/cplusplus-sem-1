#include<iostream>
using namespace std;

int main()
{
	float grossPay, allowance, salary, grossPay_Inc, allowance_Inc;
	
	cout<<"Enter gross pay:";
	cin>>grossPay;
	cout<<"Enter allowance:";
	cin>>allowance;
	
	grossPay_Inc=(0.13 *grossPay)+grossPay;
	allowance_Inc=(0.05 *allowance)+allowance;
	salary=grossPay_Inc+allowance_Inc;
	
	cout<<"Total salary after increment :"<<salary;
}

