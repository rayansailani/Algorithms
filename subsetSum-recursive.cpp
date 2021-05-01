#include<bits/stdc++.h>
using namespace std;
// Recursive solution to find if subsetsum exists
int isSubsetSum(vector<int> set, int n , int sum ){
    if(n == 0)
        return 0;
    if(sum == 0)
        return 1;
    // if the last element itself is greater than the sum, we need to surely ignore it.
    if(set[n-1] > sum){
        return isSubsetSum(set, n-1, sum);
    }
    // Now we need to decide if we need to include or to ignore the element.
    // so you first check both the options and then you decide.
    return isSubsetSum(set, n - 1, sum);
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}


int main(){
    vector<int> set =  { 3, 4, 5, 2,1 };
    int sum = 15;
    int n = set.size();
    cout<<isSubsetSum(set, n, sum)<<endl;
}
