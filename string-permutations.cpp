#include<bits/stdc++.h>
using namespace std;

void permutation(string s, int i, int n) {
    
	if (i == n-1) {
		//if we can make no more permutations then it means that we need to stop the current execution and print the current permutation.
		cout << s << endl;
        	return; 
	}
	else {
		char temp;
		for (int j =i; j < n; j++) {
			swap(s[i],s[j]);//first swaps the number 
			permutation(s, i + 1, n);//then checks for new permutation
           		swap(s[i],s[j]);//then backtracks
            
		}
        
	}

}
int main() {
	string s = "abc";
	permutation(s, 0, s.length());
	return 0;
}
