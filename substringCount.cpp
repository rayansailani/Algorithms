#include<bits/stdc++.h>
using namespace std;
int c = 0;

void permuteSubset(string s, int pos, int len, string subset = ""){
    // if the length is reached to the end of the string
    if(pos >= len){
        c++;
        return;
    }
    // else take a descision of selecting it or not
    // select the current element 
    
    permuteSubset(s, pos+1, len , subset+s[pos]);
    permuteSubset(s, pos+1, len ,subset);
    
}

int main(){
    string s = "ab";
    permuteSubset(s, 0, s.length());
    cout<<c<<endl;
}
