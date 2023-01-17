/*For any number n, write a program to list all the solutions of the equation x1 + x2 + x3 + …+ xn = C,
where C is a constant (C<=10) and x1, x2,x3,…,xn are nonnegative integers using brute force strategy. */

#include<iostream>
using namespace std;

void display(int b[],int n)
{
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";	
}

int combos(int b[],int k,int n,int s)
{
	if(k==0)
	{
		b[k]=s;
		display(b,n);
		cout<<"\n";
		return 0;
	}

	for(int i=0;i<=s;i++)
	{
		b[k]=i;
		combos(b,k-1,n,s-i);
	}
}

int main()
{
	int s,n;
	cout<<"Enter the number of groups: ";
	cin>>n;
	cout<<"Enter the sum to be obtained: ";
	cin>>s;

	int b[n];

	combos(b,n-1,n,s);
	return 0;

}