#include<bits/stdc++.h>
using namespace std;

void permutation(string s, int i, int n) {
    
	if (i == n-1) {
		cout << s << endl;
        return 
	}
	else {
		char temp;
		for (int j =i; j < n; j++) {
			swap(s[i],s[j]);
			permutation(s, i + 1, n);
            swap(s[i],s[j]);
            
		}
        
	}

}
int main() {
	string s = "abc";
	permutation(s, 0, s.length());
	return 0;
}
