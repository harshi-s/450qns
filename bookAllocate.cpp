#include <bits/stdc++.h> 
bool isPossible(vector<int> arr, int n, int m, int mid){
    int students=1;
    int pgSum=0;
    
    for(int i=0; i<n; i++){
        if(pgSum + arr[i] <= mid){
            pgSum+=arr[i];
        }
        else{
            students++;
            if(students > m || arr[i] > mid) return false;
            pgSum=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
