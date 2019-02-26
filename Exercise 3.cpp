/*
Author			: Alfian fadhil labib
NPM				: 140810180055
Deskripsi		: progam swap variabel
Tahun			: 2019
*/

#include<iostream>

using namespace std;
void swap(int temp,int x,int y){ // deklarasi fungsi
	x=temp;						 // gunakan temp sebagai wadah untuk menukar variabel
	x=y;
	y=temp;
}

int main(){
	int x=5;					// nilai x =5
	int y=4;					// nilai y=4
	int temp;
	
	cout<<"x is "<< x <<endl;
	cout<<"y is "<< y <<endl;
	
	swap(x,y);					// panggil fungsi swap 
	
	cout<<" after swap "<< endl;	// output hasil swap
	cout<<"x is "<< x <<endl;
	cout<<"y is "<< y <<endl;
}
