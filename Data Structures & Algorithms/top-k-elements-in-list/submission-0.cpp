class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> c;
        for(int i : nums)
        {
            m[i]++;
        }
        vector<pair<int, int>> v(m.begin(), m.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        int d=0;
        for(auto i : v)
        {
            if(d==k)
            {
                break;
            }
            c.push_back(i.first);
            d++;
        }
        return c;
    }
};
