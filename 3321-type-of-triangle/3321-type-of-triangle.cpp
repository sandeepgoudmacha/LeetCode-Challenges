class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a,b,c,r=0;
        int s1=nums[0],s2=nums[1],s3=nums[2];
        if(s1==s2) r++;
        if(s3==s1) r++;
        if(s2==s3) r++;
        if((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2){
        if(r==0) return "scalene";
        if(r==1 || r==2) return "isosceles";
        if(r==3) return "equilateral";
        }
        return "none";
   }
};