#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the no of elements";
    cin>>n;
    int a[n];
    cout<<"enter the elements";
    for(int i=0; i<n; i++) {
    cin>>a[i];
    }
    int b;
    cout<<"enter the no. to be searched";
    cin>>b;
    cout<<"entered array:"<<endl;
    for (int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The sorted array is:"<<endl;
    int i,j,k;
    for(i=1;i<n;i++) { 
        k=a[i];
        j=i-1;
        while (j>=0 && a[j]>k){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
    for (int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int start,end,mid,c,pos;
    start=0;
    end=n;
    for (i=0;i<n;i++){
        mid=(start+end)/2;
        if(a[mid]==b){
            c++;
            pos=mid+1;
            break;
        }
        if(a[mid]<b){
            start=mid;
        }
        else {
            end=mid;
        }
    }
    if (c!=0)
    cout<<"found at"<<pos<<"th position"<<endl;
    else
    cout<<"not found anywhere";
}