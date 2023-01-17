/*Write a Program that generates all the permutations of a given set of digits, with or withoutrepetition. 
(For example, if the given set is {1,2}, the permutations are 12 and 21). (Onemethod is given in Liu)*/

#include<iostream>  
using namespace std;  

void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r);  

void printCombination(int arr[], int n, int r)  
{  
    int data[r];  
    combinationUtil(arr, data, 0, n-1, 0, r);  
}  

void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r)  
{  
    if (index == r)  
    {  
        for (int j = 0; j < r; j++)  
            cout << data[j] << " ";  
        cout << endl;  
        return;  
    }  

    for (int i = start; i <= end &&  
        end - i + 1 >= r - index; i++)  
    {  
        data[index] = arr[i];  
        combinationUtil(arr, data, i+1,  
                        end, index+1, r);  
    }  
}  

int main()  
{  
    int a;
	cout<<"Enter the size of the array:  ";
	cin>>a;
	int arr[a];
    cout<<"Enter the values of the array: "<<endl;
	for(int i=0;i<a;i++)
	  cin>>arr[i];
    int r;
    cout<<"enter the value of r";
    cin>>r;  
    int n = sizeof(arr)/sizeof(arr[0]);  
    printCombination(arr, n, r);  
}