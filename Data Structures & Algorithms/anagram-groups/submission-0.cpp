class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> s;
        for(string a : strs)
        {
            string b=a;
            sort(a.begin(),a.end());
            s[a].push_back(b);
        }
        vector<vector<string>> c;
        for(auto x : s)
        {
            c.push_back(x.second);
        }
        return c;
    }
};
