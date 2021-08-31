#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    string s; cin >>s ;
    char a = s[0] ;
    if(islower(a)){
        s[0] = toupper(a) ;
    }
    cout << s << endl ;
return 0;
}