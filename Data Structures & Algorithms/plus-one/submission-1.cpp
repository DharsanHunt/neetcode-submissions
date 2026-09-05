class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        deque<int> a;
        int n=digits.size();
        int e=n-1;
        long long b=0;
        for(int i=0;i<n;i++)
        {
            double c=pow(10,e);
            b+=(c*digits[i]);
            e--;
        }
        b++;
        while(b>0)
        {
            a.push_front(b%10);
            b/=10;
        }
        vector<int> v(a.begin(),a.end());
        return v;
    }
};
