#include<iostream>
using namespace std;

int main (){
        int n,i,j;
         cin>>n;
    
    int row = 1;
    
    
    while(row<=n){
        int col = 1;
        while(col<=n){
        char ch = 'A' + i +j -2;
            cout<<ch<<" ";
            // ch  = ch + 1;
            col = col +1;
        }
        cout<<endl;
        row = row + 1;
    }
}