#include<bits/stdc++.h>
using namespace std;

int main(){
    // range of numbers 
    int n = 5;
    for(int i = 0;i<=n;i++){
        // printing the spaces at first 
        for(int j = i;j<=n;j++)
            cout<<" ";
        // print the numbers that come first ie from 1 to i
        for(int k = 1;k<=i;k++){
            cout<<k;
        }
        // print the numbers in reverse from i-1 to 1
        for(int k = i-1;k>0;k--){
            cout<<k;
        }
        // print the spaces after the numbers 
        for(int j = i;j<=n;j++)
            cout<<" ";
        cout<<endl;
    }
}
