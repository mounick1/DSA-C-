#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a integer:\n";
	cin>>num;
	if(num==0){
	cout << num <<"is equal ";
	}else if(num>0) {
	cout<< num << "is a positive number";
	}else
	cout<< num << "is a negative number";
}