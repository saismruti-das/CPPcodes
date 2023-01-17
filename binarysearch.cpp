#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter the no of elements";
cin>>n;
int a[n];
cout<<"enter the elements";
for(int i=0; i<n; i++) {
    cin>>a[i];
}
int b,c=0,p;
cout<<"enter the no. to be searched";
cin>>b;
for(int i=0; i<n; i++) {
    if (a[i]==b){
        c++;
        p=i+1;
    }
}
if (c=0) {
    cout<<"not found anywhere"<<endl;
}
else{
    cout<<"found at"<<p<<endl;
}
}