#include <iostream>
#include <vector>
#include <string>
using namespace std;

void selectionSort(vector<int> &nums) {
    const int size = nums.size();
    if(size == 0)
        return;
    
    for(int i{0}; i< size -2;i++){
        int smallestIndex = i;
        for(int j {i+1}; j < size -1;j++){
            if(nums[j] < nums[smallestIndex]) {
                smallestIndex = j;
            }
        }
        if(nums[i] > nums[smallestIndex]) {
            swap(nums[smallestIndex], nums[i]);
        }
    }
}
int main() {
    vector<int> nums = {7,5,3,6,8};
    selectionSort(nums);
    return 0;
}