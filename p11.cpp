/*Write a Program to calculate Permutation and Combination for an input value a and b using
recursive formula of aCb and aPb .*/

#include<iostream>
using namespace std;

int apbfun(int a,int b)
{
	if(b>a)return 0;
	else if (b==0) return 1;
	else return a*apbfun(a-1,b-1);
}

int acbfun(int a,int b)
{
	if(b>a) return 0;
	else if(a==0||b==0||a==b) return 1;
	else return acbfun(a-1,b-1)+acbfun(a-1,b);
}

int main()
{
	int a,b;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"The permutation of given a and b is: "<<apbfun(a,b);
	cout<<endl<<"The combination of given a and b is: "<<acbfun(a,b);
	return 0;
}