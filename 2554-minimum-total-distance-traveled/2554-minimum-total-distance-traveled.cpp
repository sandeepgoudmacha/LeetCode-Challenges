class Solution {
public:
    long long dp[100][100][100];
    long long f(int i,int j,int k,vector<int>&robot,vector<vector<int>>& factory){
        if(i<0)return 0;
        if(j<0)return 1LL<<45;

        if(dp[i][j][k]!=-1)return dp[i][j][k];
        int x = robot[i], y = factory[j][0];
        long long way1 = f(i,j-1,0,robot,factory);
        long long way2 = 1LL<<45;
        if (k < factory[j][1])way2 = abs(x-y)+f(i-1,j,k+1,robot,factory);
        return dp[i][j][k]=min(way1,way2);
    } 
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        int n = robot.size(), m=factory.size();
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        memset(dp,-1,sizeof(dp));
        return f(n-1,m-1,0,robot,factory);
    }
};