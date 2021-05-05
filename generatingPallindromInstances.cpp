#include<bits/stdc++.h>
using namespace std;

bool ifPall(string s, int low, int end){
    while(low<=end){
        if(s[low]!= s[end])
            return false;
        low++, end--;
    }
    return true;
}

void partUtil(string s, vector<vector<string>> &total,vector<string> &curPar, int start, int end ){
    if(start>=end){
        cout<<"added to the total"<<endl;
        for(auto it: curPar)
            cout<<it<<" ";
        cout<<endl;
        total.push_back(curPar);
        return;   
    }
    
    for(int i = start;i<end;i++){
        cout<<"start "<<start<<endl;
        cout<<"i "<<i<<endl;
        cout<<"String to be checked  "<<s.substr(start, i-start+1)<<endl;
        if(ifPall(s, start, i)){
            // add that to the curPartition
            curPar.push_back(s.substr(start, i-start+1));
            
            // recur with next position and check 
            partUtil(s,total, curPar,i+1, end);
            
            // remove that element to perform backtracking
            curPar.pop_back();
        }
    }
}

void partitionMain(string s, int low,int high){
    if(high==1){
        cout<<s<<endl;
        return;
    }
    vector<string> curPar;
    vector<vector<string>> total;
    
    partUtil(s,total, curPar, low, high);
    
    for(int i=0;i<total.size();i++){
        for(int j=0;j<total[i].size();j++){
            cout<<total[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    string s = "nitin";
    partitionMain(s,0 , s.length());
}
