#include<bits/stdc++.h>
// checking if a string is a valid shuffle of the constituent strings.
// ex - result = 12XY first = 12 second = XY will return true
// on the other hand, result = YX12 will return false
bool checkIfvalidShuffle(string first, string second, string result){
    if(first.length()+second.length()!=result.length())
        return false;
    int k = 0;
    int i = 0, j = 0;
    while(k!=result.length()){
        if(i<first.length() && result[k] == first[i])
            i++;
        else if(j<second.length() && result[k] == second[j])
            j++;
        else 
            return false;
        k++;
    }
    // if there are still some elements left in either the first or second string then it is not a valid shuffle
    if(i<first.length() || j<second.length())
        return false;
    return true;
}
int main(){
    string first = "XY", second = "12", result = "1YX2";
    cout<<checkIfvalidShuffle(first, second, result);
}
