#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "n is : "<<endl;
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){

        int digit  = n%10;

        ans = (digit * pow(10,i)) + ans;
        n = n >> 1;
        i++; 

    }
    cout << "Answer is " << ans << endl;
}