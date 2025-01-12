class Solution {
public:
    bool canBeValid(string s, string locked) 
    {
        if(s.length()%2)
            return false;
        int n=s.length(),a=0,b=0;
        for(int i=0;i<n;i++)
        {
            locked[i]=='0'|s[i]=='('?a++:a--;
            locked[n-i-1]=='0'|s[n-i-1]==')'?b++:b--;
            if(a<0||b<0)
                return false;
        }
        return true;
    }
};