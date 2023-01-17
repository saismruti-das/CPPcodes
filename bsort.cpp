#include<iostream>
using namespace std;
void display( int *a, int s) {
    for (int i = 0; i<s; i++){
        cout<<a[i]<<" ";
    }
}
void bubblesort( int *a, int s) {
    int i,j;
    for(i=s;i>0;i--) {
        for (j=0; j<i-1; j++){
            if (a[j]>a[j+1]) {
               swap(a[j],a[j+1]);
            }
        }
    }
    display (a,s);
}
void swap( int& a, int& b) {
    int t=a;
    a=b;
    b=t;
}
int main(){
     int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:"<<endl;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"array before sorting:"<<endl;
    display(arr, n);
    cout<<endl;
    cout<<"array after sorting:"<<endl;
    bubblesort(arr,n);
}