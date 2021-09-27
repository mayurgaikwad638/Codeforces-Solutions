#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        string s ;
        int ct = 0 ;
        cin >> s ;
        for(int i=s.size()-1;i>=0;i--){
            if(i==s.size()-1 && s[i]>'0'){
                ct += s[i]-'0' ;
            }
            if(s[i]>'0' && i<s.size()-1)
            {
                 ct += s[i]-'0' ;
                 ct++ ;
            }
        }
        cout << ct << endl ;
    }
return 0;
}