#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        if(n%4!=0){
            cout << "NO" << endl ;
        }
        else{
            cout << "YES" << endl ;
            int evensum = 0 ;
            int i = 2 ;
            for(int ct=1;ct<=n/2;ct++){
                cout << i << " " ;
                evensum += i ;
                i += 2 ;
            }
            int oddsum =  0;
            i = 1 ;
            for(int ct=1;ct<=n/2-1;ct++){
                cout << i << " " ;
                oddsum += i ;
                i += 2 ;
            }
            cout << evensum - oddsum << endl ;
        }
    }
return 0;
}
