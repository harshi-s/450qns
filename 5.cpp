#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n){
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[j]<0){
            if(i != j){
               swap(arr[i], arr[j]);
            }  
        i++;
        }
    }
}