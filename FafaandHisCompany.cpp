#include<iostream>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    int i=2 ;
    int ct = 1 ;
    while(i<=n/2){
        int em = n-i ;

        if(em%i==0){
            ct++ ;
        }
        i++ ;
    }
    cout << ct << endl ;
return 0;
}