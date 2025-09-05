// 典型的C++面向对象（力扣式提交） + vector基础用法
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(j != i && nums[i] + nums[j] == target) {
                    return {i, j};
                }
            } 
        }
        return {};
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    std::vector<int> ans = s.twoSum(nums, target);
    for(int i = 0; i < ans.size(); i++) std::cout << ans[i] << " ";
    std::cout << std::endl;
    return 0;
}