#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
}

void recursiveSort(vector<int> &v){
    // base condition 
    if(v.size() == 1)
        return;
    // insert the last element in the current positon and recursively call the function 
    int temp = v[v.size()-1];
    v.pop_back();
    recursiveSort(v);
    insert(v, temp);
}

int main(){
    vector<int> v = {0,34,6,4,3,78,5,3,5,8,6,5,454};
    recursiveSort(v);
    for(auto it: v){
        cout<<it<<" ";
    }
    
    
}
