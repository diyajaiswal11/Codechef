class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int n = A.size();
        int m = A[0].size();
        int ans = 0,t=1;
        // int count=1;
        // int t=1;
        for(int i=1;i<m;i++)
        {
            t=t*2;
        }
        for(int i=0;i<n;i++)
        {
            if(A[i][0]==0)
            {
                for(int j=0;j<m;j++)
                {
                    if(A[i][j]==1)
                    {
                        A[i][j]=0;
                    }
                    else
                    {
                        A[i][j]=1;
                    }
                }
            }  
        }
        for(int i=1;i<m;i++)
        {
            int zero=0;
            for(int j=0;j<n;j++)
            {
                if(A[j][i]==0)
                    zero++;                    
            }
            if(zero>n/2)
            {
                for(int j=0;j<n;j++)
                {
                    if(A[j][i]==0)
                    {
                        A[j][i]=1;
                    }
                    else
                    {
                        A[j][i]=0;
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int p=t;
            {
                for(int j=0;j<m;j++)
                {
                    if(A[i][j]==1)
                    {
                        ans+=p;
                        p=p/2;
                    }
                    else
                        p=p/2;
                }
            }
            
            // cout<<ans<<endl;
        }
        return ans;
    }
};
