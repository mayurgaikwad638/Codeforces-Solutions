#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int l, r ;
        cin >> l >> r ;
        if(r%l==0){
            cout << l << " " << r << endl ;
        }
        else{
            if(l*2>r)
             cout << "-1" << " " << "-1" << endl ;
            else
            cout << l << " " << l*2 << endl ;   
        }
    }
return 0;
}