#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
    int n ; cin >> n ;
    if(n<=30){
        cout << "NO" << endl ;
    }
    else{
        cout << "YES" << endl ;
        int a = n-30 ;
        if(n==36){
            cout << "5" << " " << "10" << " " << "15" << " " << "6" << endl ;
        }
        else if(n==40){
            cout << "5" << " " << "14" << " " << "15" << " " << "6" << endl ;
        }
        else if(n==44){
            cout << "6" << " " << "10" << " " << "15" << " " << "13" << endl ;
        }else
        cout << "6" << " " << "10" << " " << "14" << " " << n-30 << endl ;
    }
    }
return 0;
}