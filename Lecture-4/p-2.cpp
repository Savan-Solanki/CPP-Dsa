#include<iostream>
using namespace std;

int main (){
     int n;
       cin >> n;

       int i = 1;
       int a = 1;

       while(i<=n){

        int j = 1;

        while(j<=n){
          cout<< a << " " ;
          j = j+1;
          a = a+1;
        }

        cout<<endl;
        
        i = i+1;

       }
}

// 3
// 1 2 3 
// 4 5 6 
// 7 8 9 