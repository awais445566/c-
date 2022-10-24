#include<iostream>

using namespace std;
int main()
{
	int a,b;
	char z;
	while(true)
{
	cout<<"enter your value"<<endl;
	cin>>a;
	cout<<"enter your value"<<endl;
	cin>>b;
	cout<<"for addition press f" <<endl;
	cout<<"for subtraction press g "<<endl;
	cout<<"for multiplay press k"<<endl;
	cout<<"for division press j "<<endl;
	cin>>z;
	if(z== 'f')
	cout<<"the sum is"<<a+b<<endl;
	else
	if(z== 'g')
	cout<<"the sub is"<<a-b<<endl;
	if(z== 'k')
	cout<<"the multiplay is"<<a*b<<endl;
	else 
	if(z== 'j')
	cout<<"the division is"<<a/b<<endl;}
	cout<<"close program"<<endl;
}

