#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp){
        //base case
        if(n<=1){
                return n;
        }

        //step3
        if(dp[n] != -1){ return dp[n];}
 

 //step2
        dp[n] =  fib(n-1, dp) + fib(n-2, dp);
        return dp[n];
}

int main()
{
        int n;
        cin>>n;

//step1
        vector<int>dp(n+1);
        for(int i=0; i<=n; i++){
                dp[i]=-1;
        }
        
       cout<< fib(n, dp) <<endl;

       return 0;
}

//T.c = O(n)
//S.c  = O(n)





//tabulation approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;


      //  step1
      vector<int>dp(n+1);

      //step2
      dp[1]=1;
      dp[0]=0;

      //step3
      for(int i=2; i<=n; i++){
              dp[i]=dp[i-1]+dp[i-2];

      }
      cout<<dp[n]<<endl;
}

//T.c = O(n)
//S.c  = O(n)





//space optimized solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;

        int prev1 = 1;
        int prev2  =0;

        if(n==0){
                return prev2;
        }


        for(int i=2; i<=n; i++){
                int curr  = prev1+prev2;

                //shift logic
                prev2=prev1;;
                prev1=curr;
        }
        cout<<prev1<<endl;
        return 0;
}
//T.c = O(n)
//S.c  = O(1)