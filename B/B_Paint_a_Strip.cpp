    #include <bits/stdc++.h>
    using namespace std;

    void s(){
        int n,k;cin>>n;
        int i=1;
        int t=0;
        if(n<=2){
            cout<<n<<endl;
            return;
        }
        int ans=2;
        t=2;
        while(true){
            if(ans*2<n)ans=ans*2+1;
            else break;
            t++;
        }
        cout<<t<<endl;
            
    }
    int main(){
        int t;cin>>t;
        while (t--)
        {
        s();
            
        }
        
    }