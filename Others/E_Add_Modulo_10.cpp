#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        int arr[n];
        int five = 0; 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]%10==5){
                arr[i] += 5;
                five++;
            }else if(arr[i]%10==0){
                five++ ;
            }else{
                while (arr[i]%10!=2)
                {
                    arr[i] += (arr[i] % 10);
                }
            }
        }
        sort(arr, arr + n);
        if (five == n)
        {
            // cout << arr[0]<<" "<<arr[n-1];
            if (arr[0] == arr[n - 1])
            {
                cout << "YES\n";
                continue;
            }
            else
            {
                cout << "NO\n";
                continue;
            }
        }else{
            for (int i = 0; i < n-1; i++)
            {
                if((arr[i+1]-arr[i])%20!=0){
                    flag = false;break;     
                }
            }
            if (flag==true)
            {
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
        
    }
}