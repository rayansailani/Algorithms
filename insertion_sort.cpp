#include<bits/stdc++.h>
using namespace std;

vector<int> insertion_sort(vector<int> a){
    int j, item;
    for(int i = 1;i<a.size();i++){
        item = a[i];
        j = i-1;
        while(j>=0 && item < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = item;
    }
    
    return a;
}


int main(){
    vector<int> array = {234,354,2,5,71,34,234,643,3245,5756,45,345,5,433,6,34,2};
    for(auto it :insertion_sort(array)){
        cout<<it<<" ";
    }
}
