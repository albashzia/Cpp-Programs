#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i]+nums[j]==target) {
                    return vector<int>{j,i};
                }
            }
        }
        return vector<int>{};
    }
};
int main() {
    vector<int> nums = {2,7,11,15};
    int target = 18;
    Solution solver;
    vector<int> answer = solver.twoSum(nums,target);
    for (int i = 0; i<answer.size();i++) {
        cout<<answer[i]<<" ";
    }
}
