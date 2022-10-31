#include<bits/stdc++.h>
using namespace std;

    int findSum(int A[], int N)
    {
        int minimum=INT_MAX;
       for(int i=0; i<N; i++){
           if(A[i]<minimum){
               minimum=A[i];
           }
       }
       
       int maximum=INT_MIN;
       for(int i=0; i<N; i++){
           if(A[i]>maximum){
               maximum=A[i];
           }
       }
       
       int sum = maximum+minimum;
       return sum;
    }
