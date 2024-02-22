#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter a integers:\n";
	cin>>a;
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"swaping of numbers 1:\n"<<a;
	cout<<"swaping of numbers 2:"<<b;
}