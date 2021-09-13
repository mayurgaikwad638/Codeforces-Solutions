#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n, s ;
        cin >> n >> s ;
        int med = n/2 ;
        if(n==1 || n==2){
            cout << s/n << endl ;
        }else if(n%2==0){
            cout << s/(n-med+1) << endl ;
        }else{
            cout << s/(n-med) << endl ;
        }
    }
return 0;
}