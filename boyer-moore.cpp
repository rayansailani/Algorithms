
#include <iostream>
#include<vector>
#include<iterator>
using namespace std;

vector<int> createBadMatchTable(string s) {	
	vector<int>  badMatch(26,s.size());
	int len = s.size();
	int i;
	for ( i = 0; i < s.size()-1; i++) {
		//cout <<s[i]<<" - "<< ((int)s[i]) - 'a' << endl;
		badMatch[((int)s[i]) - 'a'] = len - i - 1;
		//cout << s[i] << " - " << badMatch[((int)s[i]) - 'a'] << endl;
	}
	badMatch[((int)s[i]) - 'a'] = s.size();
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " - " << badMatch[((int)s[i]) - 'a'] <<endl;
	}
	return badMatch;
}



int searchString()
{
	//cout<<findIfSubString("eet", "Leetcode");
	string pattern = "is";
	string text = "thisisthebestinthetesting";
	vector<int> table = createBadMatchTable(pattern);
	int psize = pattern.size();
	int i = psize - 1;
	while (i<text.size()) {
		int count = 0;
		while (count <= (psize - 1) && (text[i - count] == pattern[psize - count - 1])) {
			count++;
		}
		if (count == psize)
			return i+1;
		else
			i += table[((int) text[i]) - 'a'];
	}
	return -1;

}

int main() {
	cout << searchString() << endl;
}
