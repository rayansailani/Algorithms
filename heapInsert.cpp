#include<bits/stdc++.h>
using namespace std;
void insertHeap(vector<int> &heap, int pos){
    int temp = heap[pos];
    int i = pos;
    while(i > 0 && temp > heap[(i-2)/2]){
        heap[i] = heap[(i-1)/2];
        i = (i-1)/2;
    }
    heap[i] = temp;
}
int main(){
    vector<int> heap={10,20,30,25,5,40,35,60,70,90};
    for(int i = 1;i<heap.size();i++){
        insertHeap(heap, i);
    }
    for(auto i: heap){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
