// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;++j){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);

        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main() {
    vector<int> arr={10, 80, 30, 90, 40, 50, 70};
    quickSort(arr,0, arr.size()-1);
    cout<<"Sorted Array"<<endl;
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

//TC: O(NLOGN) SC: O(LOGN) 
