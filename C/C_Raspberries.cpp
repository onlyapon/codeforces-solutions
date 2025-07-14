#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
       int n,k;
        cin >> n >> k;
        
        int arr[n];
        int ans = k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(k!=4){
            for (int i = 0; i < n; i++)
            {
                if(arr[i]%k==0){
                    cout << 0 << endl;
                    return;
                }
                int cnt = 0;
                while(arr[i]%k!=0){
                    cnt++;
                    arr[i]++;
                }
                ans = min(ans, cnt);
            }
            cout << ans << endl;
        }else{
            int Max = -1,c1 = 0,c2=0,c3=0;
			for(int i=0; i<n; i++){
				if(arr[i]%4==0){
					Max = 0;
					break;
				}
				else Max = max(Max,arr[i]%4);
				if(arr[i]%4==1) c1++;
				if(arr[i]%4==2) c2++;
				if(arr[i]%4==3) c3++;
 
			}
			if(Max==0 || c2>=2) cout << "0\n";
			else if((c1>0||c3>0) && c2==1) cout << "1\n";
			else if((c1+c3)>=2) cout << min(1LL*2,4-Max) << "\n";
 
			else cout << 4-Max << "\n";
        }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}