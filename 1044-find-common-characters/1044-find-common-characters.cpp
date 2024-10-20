class Solution {
public:
string common(string a,string b)
{
    string ans;
    unordered_map<char,int> mp;
    for(auto x:a) mp[x]++;
    for(auto x:b)
    {
         if(mp.find(x) !=mp.end())
         {
            mp[x]--;
            if(mp[x]==0) mp.erase(x);
            ans.push_back(x);
         }
    }
    return ans;
}
    vector<string> commonChars(vector<string>& words) 
    {
        int n=words.size();
        string ans=words[0];
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            ans=common(ans,words[i]);
        }
        cout<<ans;
        vector<string> mahi;
        for(auto x:ans) mahi.push_back(string(1,x));
        return mahi;
    }
};