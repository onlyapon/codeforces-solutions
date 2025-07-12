#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        int arr[r][c];
        int mx = -1;
        int cnt = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]>mx){
                    mx = arr[i][j], cnt = 1;
                }else if(arr[i][j]==mx){
                    cnt++;
                }
            }
        }

        vector<int> rr(r), cc(c);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (arr[i][j] == mx) {
                    rr[i]++;
                    cc[j]++;
                }
            }
        }
        bool flag = false;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++) {
                if (arr[i][j] == mx) {
                    if(rr[i]+cc[j]-1==cnt)
                        flag = true;
                }else{
                    if(rr[i]+cc[j]==cnt)
                        flag = true;
                }
            }
        }

        cout << mx-flag << endl;
        ;
    }
}