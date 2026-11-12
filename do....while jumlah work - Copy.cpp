#include <iostream>
using namespace std;

int main()
{
	int a, jumlah=0;
	cout<<"Find the sum of natural number"<<endl;
	cout<<"Please enter integer (less than 11): ";
	cin>>a;
	for (a=a; a<=10; a++)
	{
		cout<<a<< " ";
		jumlah=jumlah+a;
	}
	cout<<"\nThe sum of natural numbers: "<<jumlah<<endl;
}
