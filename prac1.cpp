/*
Write a Program to create a SET A and determine the cardinality of SET for an input array of 
elements (repetition allowed) and perform the following operations on the SET: 
a) ismember (a, A): check whether an element belongs to set or not and return value as 
true/false.
b) powerset(A): list all the elements of power set of A.*/

#include <iostream>
using namespace std;

class set {
    int *A;
    int size;
    public:
        set();
        void input();
        void print();
        int cardinality();
        void unique();
        bool ismember(int a);
        void powerset();
};

set::set() {
    A=new int[0];
    size = 0;
    return;
}

void set::input() {
    int n;
    cout<<"Enter the size of the set."<<endl;
    cin>>n;
    size = n;
    A = new int[n];
    cout<<"enter the elements of the set"<<endl;
    for (int i =0; i<n; i++) {
        cin>>A[i];
    }
}

void set::unique() {
    for (int i =0; i<size; ++i) {
            for(int j=i+1; j<size;) {
                if(A[i]==A[j]) {
                    for (int k=0; k<size-1; ++k) {
                        A[k]=A[k+1];
                        --size;
                    }
                }
                else {
                    j++;
                }
            }
    }
}

void set::print() {
    cout<<"{";
    for (int i=0; i<size; i++) {
        cout<<A[i];
        if (i!=size-1)
        cout<<",";
    }
    cout<<"}";
}

int set::cardinality() {
    return size;
}

bool set::ismember(int a) {
    for(int i=0; i<size; i++) {
        if(A[i]==a)
        return true;
        else
        return false;
    }
}

void set::powerset() {
    cout<<"{ {},";
    int t=size*size;
    for (int i =0; i<t-1; i++) {
        for(int j=0; j<size; j++) {
            cout<<"{"<<A[j]<<"},";
        }
        
    }
}