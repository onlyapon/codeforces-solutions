#include <bits/stdc++.h>
using namespace std;

int __gcd(int x,int y){
    if(x==0)
        return y;
    return __gcd(y % x, x);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int gcdd = 0;
        for (int i = 0; i < n; i++)
        {
            gcdd = __gcd(gcdd, abs(arr[i] - i - 1));
        }
        cout << gcdd << endl;
    }
}