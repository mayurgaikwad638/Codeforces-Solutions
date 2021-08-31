#include<iostream>
using namespace std ;
int main()
{
    int n, k ;
     cin >> n >> k ;
     int i=0 ;
     while(i<k){
         int a = n%10 ;
         if(a==0){
             n = n/10 ;
         }
         else{
             n = n-1 ;
         }
         i++ ;


     }
     cout << n << endl ;
return 0;
}