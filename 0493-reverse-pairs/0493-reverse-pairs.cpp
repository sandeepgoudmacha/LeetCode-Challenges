class Solution {
public:
    
    int mergesort(vector<int>&v, int l, int m, int r){


        vector<int>temp;
        int c=0;
        int i=l, j=m+1;
        while(i<=m && j<=r){
            if((long long)v[i]>(2LL*v[j])){
                c+=(m-i+1);
                j++;
            }
            else{
                i++;
            }
        }

        int left=l, right=m+1;
        while(left<=m && right<=r){
            if(v[left]>v[right]){
                // if((long long)v[left]>(2LL*v[right])){
                //     c+=(m-left+1);
                // }
                temp.push_back(v[right]);
                right++;
            }
            else{
                temp.push_back(v[left]);
                left++;
            }
        }
        while(left<=m){
            temp.push_back(v[left]);
            left++;
        }
        while(right<=r){
            temp.push_back(v[right]);
            right++;
        }
        for(int i=l;i<=r;i++){
            v[i]=temp[i-l];
        }
        return c;
    }

    int merge(vector<int>&v, int l, int r){
        int c=0;
        if(l>=r) return c;
        int m=(l+r)/2;
        c+=merge(v, l, m);
        c+=merge(v, m+1, r);
        c+=mergesort(v, l, m, r);
        return c;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int res = merge(nums, 0, n-1);
        return res;
    }
};
