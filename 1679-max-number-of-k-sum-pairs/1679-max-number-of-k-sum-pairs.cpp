class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int count=0;
        while (i<j){
            int rem= k-nums[i];
            if (rem>nums[j])i++;
            else if (rem<nums[j])j--;
            else {
                count ++;
                i++;
                j--;
            }
        }
        return count;
    }
};