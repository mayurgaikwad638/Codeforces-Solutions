#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int s ; cin >> s ;
        int i=1, sum=1, ct=1 ;
        while(sum<s){
            i += 2 ;
            sum += i ;
            ct++ ;
        }
        cout << ct << endl ;
    }
return 0;
}