#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int res = 0 ;
        for(int i=1;i<=n;i=i*10+1){
            for(int j=1;j<=9;j++){
                if(j*i <=n){
                    res++ ;
                }
            }
        }
        cout << res << endl ;
    }
return 0;
}