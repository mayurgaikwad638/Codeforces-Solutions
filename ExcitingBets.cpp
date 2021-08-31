#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std ;
#define ll long long
int main()
{
    int t ; cin >> t ;
    while(t--){
        ll a, b ;
        cin >> a >> b ;
        if(a==b){
            cout << "0" << " " << "0" << endl ;
            continue ;
        }
        else {
            ll c = abs(a-b) ;
            ll m = min(a%c,c-a%c) ;
            cout << c << " " << m << endl ;
        }
    }
return 0;
}