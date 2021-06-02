#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<vector<int>> solution;
    solution.push_back({1});
    solution.push_back({1,2,1});
    for(int i=2;i<=n;i++){
        solution.push_back({1});
        for(int j = 0;j<solution[i-1].size()-1;j++){
            solution[i].push_back(solution[i-1][j]+solution[i-1][j+1]);
        }
        solution[i].push_back(1);
    }
    for(int i = 0;i<solution.size();i++){
        for(int j =0;j<solution[i].size();j++){
            cout<<solution[i][j]<<" ";
        }
        cout<<endl;
    }
}
