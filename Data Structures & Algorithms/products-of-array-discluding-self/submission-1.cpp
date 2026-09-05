class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n,1);
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]*nums[i-1];
        }
        int b=1;
        for(int i=n-1;i>=0;i--)
        {
            a[i]*=b;
            b*=nums[i];
        }

        return a;
    }
};
