#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n, x ;
        cin >> n >> x ;
        int ans = 1 ;
        if(n==1 || n==2){
            cout << ans << endl ;
            continue ;
        }
        else if((n-2)%x==0){
            ans += (n-2)/x ;
        }
        else{
            ans += (n-2)/x + 1 ;
        }
        cout << ans << endl ;
    }
return 0;
}