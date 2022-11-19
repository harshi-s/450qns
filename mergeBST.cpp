void inorder(TreeNode<int> *root, vector<int> &a){
    if(root==NULL) return;
    
    inorder(root->left,a);
    a.push_back(root->data);
    inorder(root->right,a);
}
TreeNode<int> *toBST(int s, int e, vector<int> &arr){
    if(s>e) return NULL;
    
    int mid=(s+e)/2;
    TreeNode<int> *root= new TreeNode<int> (arr[mid]);
    
    root->left=toBST(s, mid-1, arr);
    root->right=toBST(mid+1,e, arr);
    return root;
}

vector<int> merge(vector<int> &arr1, vector<int> &arr2){
    
    vector<int> arr(arr1.size()+arr2.size());
    int i=0, j=0, k=0;
    while(i<arr1.size() && j< arr2.size()){
        if(arr1[i] < arr2[j]){
            arr[k++]=arr1[i];
            i++;
        }
        else{
            arr[k++]=arr2[j];
            j++;
        }
    }
    
    while(i<arr1.size()){
        arr[k++]=arr1[i];
        i++;
    }
    while(j<arr2.size()){
        arr[k++]=arr2[j];
        j++;
    }
    return arr;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    vector<int> a1,a2;
    
    inorder(root1, a1);
    inorder(root2, a2);
        vector<int> merged=merge(a1, a2); 
    int s=0; 
    int e=merged.size()-1;
   
    return toBST(s, e, merged);
}
