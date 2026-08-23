class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int maxsum=INT_MIN;
        int i=0;
        for (i;i<k;i++){
            sum+=nums[i];
        }
        maxsum=max(maxsum,sum);
        int j=0;
        while (i<nums.size()){
            sum=sum-nums[j];
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            j++;
            i++;
        }

        return (double) maxsum/k;
    }


};