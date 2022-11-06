#include<bits/stdc++.h>
using namespace std;

bool sumPair(int arr[], int n, int target){
    for(int i=0; i<n; i++){
      if(arr[i] > arr[i+1]) break;

      int low=(i+1)%n;
      int high=i;

      while(low != high){
         if(arr[low]+arr[high]==target){
             return true;
         }
         else if(arr[low]+arr[high] < target){
             low=(low+1)%n;
         }
         else{
             high=(n+high-1)%n;
         }
      }
    }
return false;
}