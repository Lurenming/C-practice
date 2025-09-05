#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0]; 
        // 算法的特殊情况是：只有一个字符串，这种情况下不用进行比较，因此需要拿出来特判

        string t = strs[0];
        string ans;
        bool isin = true;
        for(int i = 0; i <= t.size(); i++){ // i表示字串的长度，最小为0，最大为全部
            for(int j = 1; j < strs.size(); j++){
                if(strs[j].find(t.substr(0, i)) != 0){
                    // 在第一个位置找不到字串，不是公共前缀
                    isin= false;
                    break;
                }
            }
            if(isin) ans = t.substr(0, i);
            else break;
        }

        return ans;
    }
};