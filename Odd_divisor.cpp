#include<iostream>
using namespace std ;
#define lli long long int
int main()
{
    lli t ; cin >> t ;
    while(t--){
        lli n ; cin >> n ;
        if(n&(n-1)){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }
        
    }
return 0;
}