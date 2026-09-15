class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1=0;
        int rob2=0;
        int rob3=0;
        int rob4=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int temp=max(nums[i]+rob1,rob2);
            rob1=rob2;
            rob2=temp;
        }
        for(int i=1;i<nums.size();i++)
        {
            int temp=max(nums[i]+rob3,rob4);
            rob3=rob4;
            rob4=temp;
        }
        int m = max(rob4,rob2);
        return max(m,nums[0]);
    }
};
