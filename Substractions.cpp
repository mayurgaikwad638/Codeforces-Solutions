#include<iostream>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    while(n--){
        int a, b ;
        cin >> a >> b ;
        int ct = 0  ;
        while(a!=0 or b!=0){
            if(a>b){
                ct += a/b ;
                if(a%b==0){
                    a = 0 ;
                    cout << ct << endl ;
                    break ;
                }
                else a = a%b ;
            }else if(b>a){
                ct += b/a ;
                if(b%a==0){
                b = 0 ;
                 cout << ct << endl ;
                 break ;
                }
                else b = b%a ;
            }else{
                ct += 1 ;
               cout << ct << endl ;
               break ;
            }
        }
        //cout << ct << endl ;
    }
return 0;
}