#include <iostream>
#include <vector>
#include <string>
using namespace std;

void merge(vector<int> &left, vector<int> &right, vector<int> &nums) {
    const int end = (int)nums.size();
    int mid = end/2;
    
}

void sort(vector<int> &nums) {
    const int end = (int)nums.size();
    if(end < 2)
        return;
    int mid = end / 2;
    vector<int> left(mid+1, 0);
    vector<int> right(end-mid, 0);
    
    for(int i=0;i< mid; i++){
        left[i]=nums[i];
    }
    
    for(int i=mid; i<end;i++) {
        right[mid+i-end]=nums[i];
    }
    sort(left);
    sort(right);
    merge(left, right, nums);
}
int main() {
    vector<int> nums1 {3,1,5,2,6};
    sort(nums1);
    return 0;
}