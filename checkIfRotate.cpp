// checks if a string s2 is a rotated version of string s1
// it is checked by concatenating s1 to s1 and cheking if s2 is a substring of temp
// time complexity, depends on the tc of the string matching problem


#include <bits/stdc++.h>

bool checkIfRotate(string s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    string temp = s1+s2;
    return (temp.find(s2)!=string::npos);
    
}

int main() {
	//code
	string s1 = "ABCD", s2 = "CDABd";
	cout<<checkIfRotate(s1,s2)<<endl;
	return 0;
}
