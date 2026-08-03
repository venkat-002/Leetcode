class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> dp(n+1,0);
       // bpttom -up approach .
       for(int i = n-1;i>=0;i--){
        dp[i] =-1e9;
        int curr = 0;
        for(int k =0; k<3 && i+k<n;k++){
            curr += stoneValue[i+k];
            dp[i] = max(dp[i], curr- dp[1+i+k]);
        }
       }
       if(dp[0] > 0) return "Alice";
       else if(dp[0] < 0) return "Bob";
       else return "Tie";
    }
};