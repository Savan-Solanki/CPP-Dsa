#include<iostream>
using namespace std;

int main (){
       int n,j,k;
       cin >> n;

       int row = 1;
       
       while (row<=n){
        int col = 1;
        int value = 1;
        while(col=row){
            cout<<col<<" ";
            value = value + 1;
            col  = col + 1;
        }
        cout<<endl;
        row = row + 1;
       }
}
