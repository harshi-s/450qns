
class Solution 
{
    private:
           bool knows(vector<vector<int> >& M, int n, int a, int b){
               if(M[a][b]==1){
                   return true;
               }
               return false;
           }
           
    public:
   
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        for(int i=0; i<n; i++){
           s.push(i);
        }
        while(s.size() > 1){
            int a=s.top();
            s.pop();
            
            int b=s.top();
            s.pop();
            
            if(knows(M,n,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int ans=s.top();
        
        int zero=0;
        for(int i=0; i<n; i++){
            if(M[ans][i]==0){
                zero++;
            }
        }
        if(zero!=n) return -1;
        
        int one=0;
        for(int i=0; i<n; i++){
            if(M[i][ans]==1){
                one++;
            }
        }
        if(one!=n-1) return -1;
        
        
        return ans;
        
    }
};
