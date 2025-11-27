//week12-2.cpp
//LeetCode 976. Largest Perimeter Triangle
//找可構成三角形長,加起來最大,兩邊和>第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-1; i>=2;i--){
            if(nums[i] < nums[i-1] + nums[i-2]){
                return nums[i] + nums[i-1] + nums[i-2];
            }
        } //把大到小印出來, 正確。
        return 0; //找不到答案, return 0
    }
};