#include <iostream>
#include <vector>
#include <string>
using namespace std;

void mergeArrays(int x[], int y[], int a[], int s, int e) {
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    while(i <= mid && j <= e) {
        if(x[i] < y[j]) {
            a[k] = x[i];
            k++;
            i++;
        } else {
            a[k] = y[j];
            k++;
            j++;
        }
    }
    
    while(i <= mid){
        a[k] = x[i];
        k++;
        i++;
    }
    
    while(j <= e){
        a[k] = y[j];
        k++;
        j++;
    }
}

void mergeSort(int nums[], int s, int e) {
    if(s >= e)
        return;
    int mid = (s+e)/2;
    int x[e+1], y[e+1];
    
    for(int i{0}; i<= mid; i++){
        x[i] = nums[i];
    }
    
    for(int i=mid+1; i<= e; i++){
        y[i] = nums[i];
    }
    
    mergeSort(x, s, mid);
    mergeSort(y, mid+1, e);
    mergeArrays(x,y,nums,s,e);
    
}

int main() {
    int nums1[5] {3,2,6,4,1};
    mergeSort(nums1, 0, 4);
    
    int nums2[6] {10,3,2,6,4,1};
    mergeSort(nums2, 0, 5);
    return 0;
}