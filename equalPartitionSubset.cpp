#include<bits/stdc++.h>
using namespace std;

bool subsetPresent(vector<int> v, int sum , int n){
    bool dp[n+1][sum + 1];
    for(int i = 0
        ;i<n+1;i++)
        dp[i][0] = true;
    for(int i = 1;i<sum + 1;i++){
        dp[0][i] = false;
    }
    for(int i = 1;i<n+1;i++){
        for(int j = 1;j<sum+1;j++){
            if(v[i-1] <= j){
//                 either include or don't
                dp[i][j] = (dp[i-1][j - v[i-1]] || dp[i-1][j]);
            }
            else{
//                 don't include the element
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    return dp[n][sum];
    // if(sum == 0){
    //     return 1;
    // }
    // if(n == 0){
    //     return 0;
    // }
    // if(v[n-1] <= sum){
    //     return subsetPresent(v, sum - v[n-1], n-1) || subsetPresent(v, sum , n-1);
    // }
    // else 
    //     return subsetPresent(v, sum , n-1);
    
}

bool subsetEqual(vector<int> v, int n){
    int sum = 0;
    for(auto it:v){
        sum+=it;
    }
    if(sum%2!=0)
        return false;
    
    return subsetPresent(v, sum/2, n);
    
}
int main(){
    vector<int> v = {1,5,11,6};
    // int sum = 11;
    // cout<<subsetPresent(v, sum , v.size());
    cout<<subsetEqual(v, v.size());
}
