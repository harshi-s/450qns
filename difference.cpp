bool findPair(int arr[], int size, int n){
    set<int> ans;
    sort(arr, arr+size);
    
    for(int i=0; i<size; i++){
        if(ans.find(abs(n-arr[i])) != ans.end()){
            return true;
        }
        else{
            ans.insert(arr[i]);
        }
    }
       return false; 
    }
