int strStr(string ref, string in) {
    int i = 0; int k = 0;
	int l = in.length();
	while (i < l && k < ref.size()) {
		if (ref[k] == in[i]) {
            // cout << k << endl;
			i++, k++;
		}
		else {
            if(i!=0){
			    k = k - i + 1;
                i = 0;
            }
            else{
            k++;
            }          
			
		}
	}
	if (i == l)
		return k-l;
	return -1;
    }

int main(){
    strStr("rayan", "ayan"); 
}
