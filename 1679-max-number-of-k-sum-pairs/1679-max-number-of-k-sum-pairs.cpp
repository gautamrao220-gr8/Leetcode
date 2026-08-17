class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int count =0;
        for (auto it:nums) {
            if (mpp.find(k-it)!=mpp.end()) {
                count++;
                mpp[k-it]--;
                if (mpp[k-it]==0){
                    mpp.erase(k-it);
                }
            }
            else mpp[it]++;

        }
        return count;
    }
};