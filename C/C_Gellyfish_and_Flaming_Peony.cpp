#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

void solve(){
   int n,mx=-1;cin>>n;
   vector<int> v(n);
   int mf;
   int odd=0,even=0,one=0,two=0;
   for (int i = 0; i < n; i++)
   {
        cin>>v[i];
        if(v[i]&1)odd++;
        else even++;
        if(v[i]==1)one++;
        if(v[i]==2)two++;
   }
   sort(v.begin(),v.end());

   if(odd>0 and one>0)cout<<n-one<<endl;
   else if(odd>0 and one==0){
       for (int i = 0; i < n; i++)
       {
        for (int j = i+1; j < n; j++)
        {
            if(gcd(v[i],v[j])==1){
                cout<<n<<endl;
                return;
            }
        }
        
       }
       
   }else if(even>0 and two==0){
        int gcdd=gcd(v[0],v[n-1]);
        int temp;
        int vr=min(v[0],v[n-1]);
        int cnt=0;
        while(gcdd!=2){
            cnt++;
            temp=gcdd;
            gcdd=gcd(gcdd,vr);
            if(temp==gcdd)
                break;
            else{
                vr=temp;
            }
        }
        cout<<n+cnt<<endl;
   }else if(even>0 and two>0){
    cout<<n-two<<endl;
   }

   
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
        
    }
    
}