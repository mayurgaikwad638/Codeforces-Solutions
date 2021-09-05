#include<iostream>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    string s ; cin >> s ;

    int ans = 0, x = 0 ;
    for(int i=0;i<s.size();i++){

        if(s[i]=='x'){
            x++ ;
        }
        else{
            if(x>=3){
                ans += x-2 ;
                x = 0 ;
            }
            else{
                x = 0 ;
            }
        }
    }
    if(x>=3) ans += x-2 ;
    cout << ans << endl ;
return 0;
}