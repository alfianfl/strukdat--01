/*
Author			: Alfian fadhil labib
NPM				: 140810180055
Deskripsi		: mengubah celcius ke fahrenheit
Tahun			: 2019
*/

#include<iostream>

using namespace std;
float cel2Fah(int temp){
    return temp*9/5+32;
}

int main()
{
    int c;
    cout << "Konversi Celcius Ke Fahrenheit"<<endl;
    cout << "Celcius    = ";
    cin >> c;
    cout << "Fahrenheit = " << cel2Fah(c);
    return 0;
}

