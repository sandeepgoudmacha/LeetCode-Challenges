class Solution {
public:
   void radsort(vector<int>&v,int exp){
    int n=v.size();
    vector<int>c(10,0);
    vector<int>o(n);
    for (int i = 0; i < n; i++) {
        c[(v[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        c[i] += c[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        o[c[(v[i] / exp) % 10] - 1] = v[i];
        c[(v[i] / exp) % 10]--;
    }
    // int d=0;
    for (int i = 0; i < n; i++) {
        v[i] = o[i];
        // if(i<n-1){
        //     d=max(abs(v[i]-v[i+1]),d);
        // }
    }
    // return d;
  
   }

    int maximumGap(vector<int>& nums) {
        if (nums.empty()) return 0;  
        int n=nums.size();
        if(n<2) return 0;
        int m=*max_element(nums.begin(),nums.end());
        // int r=0;
          for (long long exp = 1; exp <= m; exp *= 10) { 
            radsort(nums, exp);
        }
        int d=0;
        for(int i=1;i<n;i++){
            d=max(nums[i]-nums[i-1],d);
        }

    return d;
    }
};