#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        int a=0,b=0,c=0 ;

        for(int i=0;i<s.size();i++){
            if(s[i]=='A') a++ ;
            else if(s[i]=='B') b++ ;
            else c++ ;
        }
        //cout << a << b << c ;
        if((a+c)!=b){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl ;
        }
    }
return 0;
}