/*
Author			: Alfian fadhil labib
NPM				: 140810180055
Deskripsi		: progam swap
Tahun			: 2019
*/

#include<iostream>

using namespace std;
void swap(int temp,int x,int y){
	x=temp;
	x=y;
	y=temp;
}

int main(){
	int x=5;
	int y=4;
	int temp;
	
	cout<<"x is "<< x <<endl;
	cout<<"y is "<< y <<endl;
	
	swap(x,y);
	
	cout<<" after swap "<< endl;
	cout<<"x is "<< x <<endl;
	cout<<"x is "<< y <<endl;
}
