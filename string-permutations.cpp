#include<bits/stdc++.h>
using namespace std;
//the below function is to check for permutations without considering duplicates
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

//the below implementation is to check for unique string permutations
//ex aab = aab aba baa
void permutationsUnique(string s, int i, int n) {
    
	if (i == n-1) {
		cout << s << endl;
        return;
	}
	else {
		char temp;
		for (int j =i; j <n; j++) {
            // cout<<"swapping "<<s[i]<<" With "<<s[j]<<endl;
            	if(s[i] != s[j] || i==j ){
            	    swap(s[i],s[j]);
            	    permutationsUnique(s, i + 1, n);
            	    swap(s[i],s[j]);
            		}
		}
	}
}

int main() {
	string s = "abc";
	permutation(s, 0, s.length());
	return 0;
}
