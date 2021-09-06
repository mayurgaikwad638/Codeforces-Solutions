#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int q ; cin >> q ;
    while(q--){
        string s , t ;
        cin >> s >> t ;
        
        int n = s.length(), m = t.length() ;

        int g = __gcd(n,m) ;

        string res1 = "" ;
        int l = m/g ;
        while(l--){
            res1 += s ;
        }
      //  cout << res1 << endl ;
        string res2 = "" ;
        int k= n/g ;
        while(k--){
            res2 += t ;
        }
       // cout << res2 << endl ;
        if(res1==res2){
            cout << res1 << endl ;
        }
        else{
            cout << "-1" << endl ;
        }



        

        
    }
return 0;
}