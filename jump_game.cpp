
class Solution {
  public:
    int canReach(int A[], int N) {
        int i=0;
        int jumps=0;
        
        while(i<N){
            if(jumps < i) return 0;
            jumps=max(jumps, A[i]+i);
            i++;
        }
        
        return 1;
    }
};
