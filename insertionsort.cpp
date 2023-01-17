#include<iostream>
using namespace std;
void display( int *a, int s) {
    for (int i = 0; i<s; i++){
        cout<<a[i]<<" ";
    }
}
void selectionsort( int *a, int s) {
    int i,j,k;
    for(i=1;i<s;i++) {
        k=a[i];
        j=i-1;
        while (j>=0 && a[j]>k){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
    display (a,s);
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
    selectionsort(arr,n);
}