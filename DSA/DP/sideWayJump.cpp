class Solution {
public:
    int solve(vector<int>& obstacles, int currlen, int currpos){
        //base case
        int n = obstacles.size()-1;

        if(currpos==n){
            return 0;
        }
        if(obstacles[currpos+1] != currlen){
            return solve(obstacles, currlen, currpos+1);
        }else{
            //side way jump
            int ans = INT_MAX;
            for(int i= 1; i<=3 ; i++){
                if(currlen != i && obstacles[currpos] != i){
                    ans = min(ans, 1+solve(obstacles, i, currpos));
                }
                
            }
            return ans;
        }
    }

     int solveMem(vector<int>& obstacles, int currlen, int currpos,vector<vector<int>> &dp){
        //base case
        int n = obstacles.size()-1;
        if(currpos==n){
            return 0;
        }
        if(dp[currlen][currpos] != -1){
            return dp[currlen][currpos];
        }
        if(obstacles[currpos+1] != currlen){
            return solveMem(obstacles, currlen, currpos+1, dp);
        }else{
            //sede way jump
            int ans = INT_MAX;
            for(int i= 1; i<=3 ; i++){
                if(currlen != i && obstacles[currpos] != i){
                    ans = min(ans, 1+solveMem(obstacles, i, currpos, dp));
                }
                
            }
            dp[currlen][currpos]= ans;
            return dp[currlen][currpos];
        }
    }

    int solveTab(vector<int>& obstacles){
        int n = obstacles.size()-1;
        vector<vector<int>>dp(4, vector<int> (obstacles.size(), 1e9));

        vector<int>curr(4, INT_MAX);
        vector<int>next(4, INT_MAX);


        next[0] = 0;
        next[1] = 0;
        next[2] = 0;
        next[3] = 0;


        for(int currpos =  n-1; currpos>=0 ; currpos--){
            for(int currlen = 1; currlen<= 3; currlen++){


                if(obstacles[currpos+1] != currlen){
                    curr[currlen] =  next[currlen];
                }else{

                    //sede way jump
                    int ans = 1e9;
                    for(int i= 1; i<=3 ; i++){
                        if(currlen != i && obstacles[currpos] != i){
                            ans = min(ans, 1+next[i]);
                        }
                        
                    }
                    curr[currlen] = ans;
                }
            }
            next = curr;
        }

        return min(next[2], min(1 + next[1], 1+next[3]));

    }

    int minSideJumps(vector<int>& obstacles) {
        // return solve(obstacles, 2,0);
        // vector<vector<int>>dp(4, vector<int> (obstacles.size(), -1));
        // return solveMem(obstacles, 2,0,dp);
        return solveTab(obstacles);
    }
};