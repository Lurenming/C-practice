#include <iostream>
#include <vector>
using namespace std;

class Solution1 {
    // 复杂度是O(n^2)，效果不好
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        int i = 1, temp , n = nums.size();
        while(i < n){
            if(nums[i] == nums[i-1]){
                for(int j = i; j < n-1; j++){
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
                i--;
                n--;
            }
            i++;
        }
        return n;
    }
};

class Solution {
    // 双指针复杂度是O(n)，速度很快
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        int fast = 1, slow = 1;
        while(fast < nums.size()){
            //while(nums[fast] == nums[fast-1]) fast ++; 会发生数组越界，没有注意边界！
            while(fast < nums.size() && nums[fast] == nums[fast-1]) fast++; // 先算前面
            if(fast < nums.size()) nums[slow++] = nums[fast++];
        }
        return slow;
    }
};