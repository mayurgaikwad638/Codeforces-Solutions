#include<iostream>
using namespace std ;
int main()
{
    int t; cin >> t; 
    while(t--){
        long long int n ; cin >> n ;
        if(n%2 != 0) n++ ;
        if(n>=6){
            cout << (n/2) * 5 << endl ;
        }
        else{
            cout << "15" << endl ;
        }
    }
return 0;
}