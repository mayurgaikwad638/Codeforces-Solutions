#include<iostream>
#include<climits>
#include<string>
using namespace std ;
int main()
{
    string s ; cin >> s ;
    int ct = 1 , maxct = INT_MIN ;

    for(int i=1;i<s.size();i++){

        if(s[i]==s[i-1]){
            ct++ ;
        }
        else{
            maxct = max(maxct,ct) ;
            ct = 1 ;
        }
    }
    maxct = max(ct,maxct) ;
    if(maxct>=7) cout << "YES" << endl ;
    else cout << "NO" << endl ;
return 0;
}