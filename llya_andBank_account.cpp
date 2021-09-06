#include<iostream>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    if(n>0){
        cout << n << endl ;
    }else{
        int tmp = n%10 ;
        n /= 10 ;
       // cout << tmp << endl  ;
       int tmp1 = n%10 ;
        n /= 10 ;
        if(n==0){
            cout << max(tmp,tmp1) ;
        }else{
        if(tmp1<tmp){
            cout << n << abs(tmp) ;
        }else{
            cout << n << abs(tmp1) ;
        }
        }
    }
return 0;
}