#include<iostream>
#include<vector>
using namespace std ;
int const n = 3e5 + 5 ;
int main()
{
    int t  ; cin >> t ;
    vector<int> xorval(n,0);
    for(int i=1;i<n;i++){
        xorval[i] = xorval[i-1] ^ i ;
    }
    while(t--){
        int a , b ;
        cin >> a >> b ;

        if(xorval[a-1]!=b){
            int x = xorval[a-1] ^ b ;

            if(x==a){
                cout << a+2 << endl ;
            }else{
                cout << a+1 << endl;
            }
        }
        else{
            cout << a << endl;
        }
       // cout << xorval[a] ;
    }
return 0;
}