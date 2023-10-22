//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=mp[str[0]];
        for(int i=1;i<str.length();i++)
        {
            if(mp[str[i]]>mp[str[i-1]])
            {
                ans-=mp[str[i-1]];
                ans+=(mp[str[i]]-mp[str[i-1]]);
            }
            else
            {
                ans+=mp[str[i]];
            }
        }
        return ans;
    }
};
