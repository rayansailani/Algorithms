#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low - 1;
    for(int j = low;j<=high;j++){
        if(a[j]<pivot){
            i++;
            swap(a[j], a[i]);
        }
    }
    swap(a[high], a[i+1]);
    return i+1;
    
}

void quickSort(int a[], int low, int high){
    if(low<high){
        int p = partition(a, low, high);
        quickSort(a, low, p-1);
        quickSort(a, p+1, high);
    }
    else 
        return;
}

int main(){
    int a[] = {99,12,45,3,5,23,67,4,78,5,7,9,5,32,5};
    int n = sizeof(a)/sizeof(a[0]);
    // cout<<n<<endl;
    quickSort(a, 0 ,n-1);
    for(int i: a){
        cout<<i<<" ";
    }
}
