        #include<bits/stdc++.h>
        using namespace std;
        #define int long long

        int gcd(int x,int y){
            if(x==0)return y;
            return gcd(y,x%y);
        }

        void solve(){
            int n,k,x;cin>>n>>k>>x;
            for (int i = 1; i < k+1; i++)
            {
                if(n%i==0 and i!=x){
                    cout<<"YES\n";
                    cout<<n/i<<endl;
                    while(n!=0){
                        cout<<i<<" ";
                        n-=i;
                        
                    }
                    cout<<endl;
                        return;
                }
            }
            for (int i = k; i>0; i--)
            {
                if(i!=x){
                    int y=n%i;
                    if(y!=x and y<=k and y>0){
                        cout<<"YES\n"<<(n+i-1)/i<<endl;
                        while (n!=y)
                        {
                            cout<<i<<" ";
                            n-=i;
                        }
                        cout<<y<<endl;
                        return;
                    }
                }
            }
            
            cout<<"NO\n";
            
        }

        signed main(){
            
            int t;cin>>t;
            while(t--){
                solve();
            }
        }