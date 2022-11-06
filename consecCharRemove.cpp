 #include<bits/stdc++.h>
 using namespace std;
 string removeConsecutiveCharacter(string S)
    {
stack<char> st;

for(int i=0; S[i] != '\0'; i++){
    if(st.empty() || st.top() != S[i]){
        st.push(S[i]);
    }

}

string ans="";

while(!st.empty()){
    ans+=st.top();
    st.pop();
}

reverse(ans.begin(), ans.end());
        return ans;
    }