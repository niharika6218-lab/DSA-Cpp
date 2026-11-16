class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numbers;
        for(int num: nums){
            if(numbers.count(num)>0) return true;
            numbers.insert(num);
        }
        return false;
    }
};