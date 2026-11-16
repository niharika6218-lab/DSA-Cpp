class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen(nums.size());
        for(const auto& num: nums){
            auto res=seen.insert(num);
            if(!res.second){
                return true;
            }
        }
        return false;
    }
};