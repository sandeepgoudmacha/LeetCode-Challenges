class Solution 
{
public:
    long long fact(long long x)
    {
        if (x <= 1) return 1;
        return x * fact(x - 1);
    }
    
    vector<int> permute(int n, long long k) 
    {
        set<int> even, odd;
        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 0)
                even.insert(i);
            else
                odd.insert(i);
        }
        
        vector<int> ret;
        long long ans = 0;
        
        if(n>=24)
        {
            int x = 0;
            for(int i=1;i<=n;i++)
            {
                if(n-x<=22)
                {
                    break;
                }
                ret.push_back(i);
                if(i%2==0)
                {
                    even.erase(i);
                }
                else
                {
                    odd.erase(i);
                }
                x++;
            }   
        }
        else if(n%2==0)
        {

        long long o = fact(even.size() - 1) * fact(odd.size());
        long long e = fact(odd.size() - 1) * fact(even.size());
        for (int i = 1; i <= n; i++)
        {
            //cout<<ans<<endl;
            if (ret.empty())
            {
                if (i % 2 == 0)
                {   
                    if (ans + o >= k)
                    {
                        ret.push_back(i);
                        even.erase(i);
                        break;
                    }
                    ans += o;
                }
                else
                {
                    if (ans + e >= k)
                    {
                        ret.push_back(i);
                        odd.erase(i);
                        break;
                    }
                    ans += e;
                }
            }
        }
        }
        else
        {
            if(odd.size()>even.size())
            {
                long long o = fact(even.size() - 1) * fact(odd.size());
                long long e = fact(odd.size() - 1) * fact(even.size());
                for (int i = 1; i <= n; i+=2)
                {
                    if (ret.empty())
                    {
                        if (i % 2 == 0)
                        {   
                            if (ans + o >= k)
                            {
                                ret.push_back(i);
                                even.erase(i);
                                break;
                            }
                            ans += o;
                        }
                        else
                        {
                            if (ans + e >= k)
                            {
                                ret.push_back(i);
                                odd.erase(i);
                                break;
                            }
                            ans += e;
                        }
                    }
                }
            }
            else
            {
                long long o = fact(even.size() - 1) * fact(odd.size());
                long long e = fact(odd.size() - 1) * fact(even.size());
                for (int i = 2; i <= n; i+=2)
                {
                    if (ret.empty())
                    {
                        if (i % 2 == 0)
                        {   
                            if (ans + o >= k)
                            {
                                ret.push_back(i);
                                even.erase(i);
                                break;
                            }
                            ans += o;
                        }
                        else
                        {
                            if (ans + e >= k)
                            {
                                ret.push_back(i);
                                odd.erase(i);
                                break;
                            }
                            ans += e;
                        }
                    }
                }
            }
        }
        if(ret.empty()) return ret;
        for (int i = 0; i < n - 1; i++)
        {
            if (ret.back() % 2 == 0)
            {
                if (odd.empty()) break;
                long long o = + fact(odd.size() - 1) * fact(even.size());
                for (auto p : odd)
                {
                    if (ans + o  >= k)
                    {
                        ret.push_back(p);
                        odd.erase(p);
                        break;
                    }
                    ans += o;
                }
            }
            else
            {
                if (even.empty()) break;
                long long e = fact(even.size() - 1) * fact(odd.size());
                for (auto p : even)
                {
                    if (ans + e >= k)
                    {
                        ret.push_back(p);
                        even.erase(p);
                        break;
                    }
                    ans += e;
                }
            }
        }
        
        return ret;
    }
};