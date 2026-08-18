// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int left, int mid, int right){
    vector<int> leftarr(arr.begin()+left, arr.begin()+mid+1);
    vector<int> rightarr(arr.begin()+mid+1,arr.begin()+right+1);
    int i=0;
    int j=0;
    int k=left;
    while(i<leftarr.size() && j<rightarr.size()){
        if(leftarr[i]<=rightarr[j]){
            arr[k]=leftarr[i];
            i++;
        }else{
            arr[k]=rightarr[j];
            j++;
        }
        k++;
    }
    while(i<leftarr.size()){
        arr[k++]=leftarr[i++];
    }
    while(j<rightarr.size()){
        arr[k++]=rightarr[j++];
    }
}
void mergeSort(vector<int> &arr,int left, int right){
    if(left>=right) return; //base case- 1 element or invalid range
    int mid = left+(right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left, mid,right);
}
int main() {
   vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;   

    return 0;
}



//TC: O(NLOGN) SC: O(N) 
