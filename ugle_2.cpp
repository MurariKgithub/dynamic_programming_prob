#include<bits/stdc++.h>
using namespace std;
int func(int n){
    vector<int> dp(n,0);
    dp[0]=1;
    int p2 = 0,p3 =0,p5 =0;
    for (int i = 1; i < n; i++)
    {   int f1 = dp[p2]*2,f2 = dp[p3]*3,f3 = dp[p5]*5;
        int val = min(f1,min(f2,f3));
        if(val==f1) p2++;
        if(val==f2) p3++;
        if(val == f3)   p5++;
        dp[i] = val;
    }
    return dp[n-1];
}
int main(){
    int n;
    cout<<"enter a number need to find the ugle number of: "<<endl;
    cin>>n;
    cout<<func(n);

}