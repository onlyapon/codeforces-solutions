#include <bits/stdc++.h>
using namespace std;

void s(){
    int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(a[i]>a[j]){
                    cout << "YES\n2\n"
                         << a[i] << " " << a[j] << "\n";
                    return;
                }
            }
            
        }
        cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        s();
    }
}