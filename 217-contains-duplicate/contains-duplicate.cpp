class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> x;
        for(int i : nums){
            if(x.count(i)){
                return true;
            }
            x.insert(i);
        }

        return false;
        
    }
};