        #include<bits/stdc++.h>
        using namespace std;
        #define int long long

        int gcd(int x,int y){
            if(x==0)return y;
            return gcd(y,x%y);
        }

        void solve(){
            int n,f=0,k;cin>>n>>k;
            if(n%2==0)f=1;
            if(k&1)f=1;
            if(f)cout<<"YES\n";
            else cout<<"NO\n";
            
        }

        signed main(){
            
            int t;cin>>t;
            while(t--){
                solve();
            }
        }