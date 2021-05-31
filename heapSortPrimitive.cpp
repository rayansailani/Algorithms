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
void deleteHeap(vector<int> &heap, int pos){
    int temp = heap[0];
    heap[0] = heap[pos];
    int i = 0;
    int j = 2*i + 1;
    while(j<pos){
        if(heap[j+1]> heap[j])
            j++;
        if(heap[i] < heap[j]){
            swap(heap[i], heap[j]);
            i = j;
            j = 2*j+1;
        }
        else
            break;
    }
    heap[pos] = temp;
}
int main(){
    vector<int> heap={90,23,53,40,30,78};
    for(int i = 1;i<heap.size();i++){
        insertHeap(heap, i);
    }
    for(auto i: heap){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i = heap.size()-1;i>=0;i--){
        deleteHeap(heap, i);
    }
    for(auto i: heap){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
