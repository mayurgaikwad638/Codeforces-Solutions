#include<iostream>
using namespace std ;

int power(int a,int n,int p){

        int res = 1 ;
        while(n){

            if(n%2){
                res = (res * a) % p ;
                n-- ;
            }
            else{
                a = (a * a) % p ;
                n /= 2 ;
            }
        }
        return res ;
}
int main()
{
    int n ; cin >> n ;
    int a = 1378, p = 10 ;
    cout << power(a,n,p) << endl ;
return 0;
}