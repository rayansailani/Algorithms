// iterator reference
// the iterator reference is wrt to strings. The following is valid using other iterable template structures like vectors, sets etc.
#include <bits/stdc++.h>

bool checkIfRotate(string s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    string temp = s1+s2;
    return (temp.find(s2)!=string::npos);
    
}

int main() {
	//code
	string s = "Rayan sailani is preparing for product based companies ";
    // declaring an iterator 
    // datatype::iterator pointer_name = begin() pointer
    string::iterator ptr = s.begin();
    // advance(iterator, displacement);
    cout<<*ptr<<endl;//R
    advance(ptr,4);
    cout<<*ptr<<endl;//n
    
    // next and prev
    string::iterator ptr1 = s.begin();
    string::iterator ptr2 = s.end();
    // next and prev don't increment the pointer position but they return a pointer to the position mentioned
    cout<<*(next(ptr1,2))<<endl;// prints the second from the first - y
    cout<<*(prev(ptr2,2))<<endl;// prints the second from the last - s
    
    
    // insertor() - used to insert elements at position 
    string s1 = "1234";
    string::iterator ptr3 = s.begin();
    advance(ptr3, 3);
    copy(s1.begin(), s1.end(), inserter(s, ptr3));// Ray1234an sailani is preparing for product based companies 
    cout<<s<<endl;
    
    return 0;
}
