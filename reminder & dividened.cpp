#include<iostream>
using namespace std;
int main()
{
	int dividend,divisor;
	cout<<"enter the divinded:\n";
	cin>>dividend;
	cout<<"enter the divisor:\n";
	cin>>divisor;
	if(dividend!=0)
	{
	int quotient=dividend/divisor;
	int reminder=dividend%divisor;
	cout<<"Quotient:"<<quotient;
	cout<<"\nReminder:"<<reminder;
	}else{
		cout<<"Error: Division by zero is undefined";
	}
}