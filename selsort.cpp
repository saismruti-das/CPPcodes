#include <iostream>
using namespace std;
void swap(int& a, int& b){
    int t=a;
    a=b;
    b=t;
}
void display(int *a, int s){
    for ( int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int *a, int s){
    int i, j, min;
    for (i=0;i<s-1;i++){
        min=i;
        for (j=i+1; j<s; j++){
            if (a[j]<a[min]){
                min=j;
            }
            swap(a[i],a[min]);
        }
    }
    for ( int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int n;
    cout <<"enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:"<<endl;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"array before sorting:";
    display(arr,n);
    cout<<"array after sorting:";
    selectionsort(arr, n);
}