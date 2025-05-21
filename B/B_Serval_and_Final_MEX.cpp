#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n+1);
        int pos1=-1,pos2=-1;
        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (v[i]==0)
            {
                if(pos1==-1)pos1=i;
                else pos2=i;
            }
            
        }
        if (pos1==-1 and pos2==-1)
        {
            cout<<1<<"\n"<<1<<" "<<n<<"\n";
            continue;
        }
        if(pos1!=-1 and pos2!=-1){
            if (pos1==1 and pos2==n)
            {
                cout<<3<<"\n"<<"1 2\n"<<"2 "<<n-1<<"\n"<<"1 2\n";
            }else{
                cout<<2<<"\n"<<pos1<<" "<<pos2<<"\n"<<1<<" "<<n-pos2+pos1<<"\n";
            }
            
        }else{
            if (pos1==1)
            {
                cout<<2<<"\n"<<"1 2\n"<<1<<" "<<n-1<<endl;
            }else{
                cout<<2<<"\n2 "<<n<<"\n1 2\n";
            }
            
        }
        

        
    }
    
}