#include<bits/stdc++.h>
using namespace std;
bool word_break(string s,set<string> st,int pos,vector<int> &dp){
    if(pos>=s.size()){
        return true;
    }
    if(dp[pos]!=-1){
        return dp[pos];
    }
    for (int i = pos; i < s.size(); i++)
    {   //cout<<s.substr(pos,i+1)<<endl;
        if(st.count(s.substr(pos,i-pos+1)) && word_break(s,st,i+1,dp)){
           { dp[pos] = true;
            return dp[pos];
           }
    }
    }
    dp[pos] = false;
    return dp[pos];
}
int main(){
    string s = "applepenapple";
    vector<string> dic = {"apple","pen"};
    set<string> st;
    vector<int> dp(s.size(),-1);
    for (int i = 0; i < dic.size(); i++)
    {   st.insert(dic[i]);
    }
    cout<<word_break(s,st,0,dp);
}