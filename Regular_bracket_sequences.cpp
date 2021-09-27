#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
    int n ; cin >> n ;
    int k = n - 1;

    for(int i=0;i<n;i++){
        cout << "()";
    }cout << endl ;

    while(k>0){
        for(int i=0;i<n-k;i++){
            cout << "(" ;
        }

        for(int i=0;i<k;i++){
            cout << "()" ;
        }

        for(int i=0;i<n-k;i++){
            cout << ")" ;
        }

        cout << endl ;
        k-- ;
    }
    }

return 0;
}