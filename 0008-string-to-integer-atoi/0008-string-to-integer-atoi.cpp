class Solution {
public:
    long findAnswer(string s,int i,long ans){
       if(i>=s.length() || !isdigit(s[i])){
        return ans;
       }
       ans = ans * 10 + (s[i] - '0');
       if (ans > INT_MAX) return ans;
        return findAnswer(s,i+1,ans);
    }
    int myAtoi(string s) 
    {
        int i=0;
        while(i<s.length() && s[i]==' '){
          i++;
      }
      int j=1;
      if(i<s.length() && s[i]=='-') {
        j=-1; i++;
      }
      else if(i<s.length()&&s[i]=='+'){
        j=1;
        i++;
      }
    //   long ans=0;
      long res=findAnswer(s,i,0);
      if(j*res>INT_MAX) return INT_MAX;
      if(j*res<INT_MIN) return INT_MIN;
      return j*res;
    }
};