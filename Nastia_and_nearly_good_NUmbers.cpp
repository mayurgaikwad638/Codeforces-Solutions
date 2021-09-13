#include<iostream>
using namespace std ;
#define lli long long int
int main()
{
    int t ; cin >> t ;
    while(t--){
        int a,b ;
        cin >> a >> b ;
        if(b==1) cout << "NO" << endl ;
       // if(a%b==0) cout << "NO" << endl ;
       else{
        cout << "YES" << endl ;
        lli x = a* (lli) b ;
        lli y = a*(lli)(b+1) ;
        cout << a << " " << x << " " << y << endl ;
       }
    }
return 0;
}