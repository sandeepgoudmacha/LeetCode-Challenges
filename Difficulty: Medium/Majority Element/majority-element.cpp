class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
       int n=arr.size();
       int count=0,element=-1;
       for(int i=0;i<n;i++){
           if(count==0){
               count++;
               element=arr[i];
           }
           else if(element == arr[i]) count++;
           else{
               count--;
           }
       }
       int c1=0;
       for(int i=0;i<n;i++){
           if(arr[i] == element) c1++;
       }
       if(c1>n/2) return element;
       
      
       return -1;
    }
};