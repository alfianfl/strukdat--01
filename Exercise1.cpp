/*
Author			: Alfian fadhil labib
NPM				: 140810180055
Deskripsi		: Progam fizz,buzz,fizzbuzz
Tahun			: 2019
*/

#include<iostream>

using namespace std;
void fizzbuzz(){                    
    for(int i=1;i<=100;i++){
        if(i%3==0&&i%5==0){			// kalo dibagi 3 dan 5
            cout << "fizzbuzz"<<endl;
        }else if(i%5==0){			// kalo dibagi 5
            cout << "buzz"<<endl;  	
        }else if(i%3==0){ 			// kalo dibagi 3          
            cout << "fizz"<<endl;    
        }else cout<<i<<endl;
    }
}

int main()
{
    fizzbuzz();
    return 0;
}
