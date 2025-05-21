#include <bits/stdc++.h>
using namespace std;

int sum_of_dig(int n){
    int sum=0;
    while (n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        int x,y;cin>>x>>y;


        if (x + 1 >= y && (x + 1 - y) % 9 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
        
    }
    
}