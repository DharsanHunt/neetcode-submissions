class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        deque<int>pos;
        deque<int>neg;
        for(auto num : nums)
        {
            if(num>0)
            {
                pos.push_back(num);
            }
            else
            {
                neg.push_back(num);
            }
        }
        vector<int> result;
        int a=nums.size();
        int c=2;
        while(a>0)
        {
            if(c%2==0)
            {
                int b=pos.front();
                pos.pop_front();
                result.push_back(b);
                a--;
                c++;
            }
            else
            {
                int b=neg.front();
                neg.pop_front();
                result.push_back(b);
                a--;
                c++;
            }
        }
        return result;
    }
};