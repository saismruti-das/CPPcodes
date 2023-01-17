/*Given a full m-ary tree with i internal vertices, Write a Program to find the number of leaf
nodes.*/


#include <iostream>
using namespace std;

 int leaf(int m, int v){
	int i=(v-1)/m;
	int l=(m-1)*i+1;
	return l;
 }
 
 int main(){
 	int m, n;
 	cout<<"This program calculates the leaves of a m-ary tree ."<<endl;
 	cout<<"\nEnter m: ";
 	cin>>m;
 	cout<<"Enter the number of vertices of the tree: ";
 	cin>>n;
 	cout<<"\nNumber of leaves: "<<leaf(m,n);
	return 0;
 }