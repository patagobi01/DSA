class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int add = (n*(n+1))/2;
        for(int i : nums){
            add= add - i;
        }
        return add;
    }
};