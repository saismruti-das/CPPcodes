/*Write a Program to implement binary search using recursion.*/

#include<iostream>
using namespace std;

void input(int arr[],int n)
{
	cout<<"Enter the values of the array: "<<endl;
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	return;
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	cout<<endl;
	return;
}

int binarysearch(int a[],int start,int end,int element)
{
	if(start>end)
		return -1;
	int mid=(start+end)/2;
	if(a[mid]==element)
	    return mid;
	else if(element<a[mid])
	    binarysearch(a,start,mid-1,element);
    else if(element>a[mid])
        binarysearch(a,mid+1,end,element);
    else
    return -2;
}

void insertionsort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	return;
}

int main()
{
	int n,r;
	cout<<"Enter the size of the array:  ";
	cin>>n;
	int arr[n];
	input(arr,n);
	cout<<"The entered array is: "<<endl;
	display(arr,n);
	insertionsort(arr,n);
	cout<<"\nInput array after sorting: \n\n";
	display(arr,n);
	cout<<"\nEnter the element to be searched: ";
	int k;
	cin>>k;
    r=binarysearch(arr,0,n-1,k);
	if (r>=0) {
        cout<<k<<"is found at"<<r+1 ;
    }
    else
    cout<<k<<"is not a member of the set";
	return 0;
}