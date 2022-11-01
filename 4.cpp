#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
    {
        
      int zero=0, one=0, two=0;
      for(int i=0; i<n; i++){
          if(a[i]==0)
          zero++;
      }
      
      for(int i=0; i<n; i++){
          if(a[i]==1)
          one++;
      }
      
      for(int i=0; i<n; i++){
          if(a[i]==2)
          two++;
      }
      
      int c=0;
      
      for(int i=0; i<zero; i++){
          a[c]=0;
          c++;
      }
      
      for(int i=0; i<one; i++){
          a[c]=1;
          c++;
      }
      
      for(int i=0; i<two; i++){
          a[c]=2;
          c++;
      }
      
    }