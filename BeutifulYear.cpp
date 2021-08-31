#include<iostream>
using namespace std ;
bool check(int y){
    
        int a, b, c, d ;
        a = y%10 ;
        y = y/10 ;
        b = y%10 ;
        y = y/10 ;
        c = y%10 ;
        y = y/10 ;
        d = y%10 ;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        return true ;
        else return false ;
}
int main()
{
    int y ; cin >> y ;
    y++ ;
    while(!check(y)){
        y++ ;

    }
    cout << y << endl ;
return 0;
}