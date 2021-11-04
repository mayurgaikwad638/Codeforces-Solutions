#include<iostream>
using namespace std ;
int main()
{
    int t; cin >> t ; 
    while(t--){
        string s ;
        cin >> s ;
        char ans ;
        char c = s[0] ;
        int ct ;
        bool check = false ;
        for(int i=1;i<s.size();i++){
            if(s[i]<c){

                ans = s[i] ;
                c = s[i] ;
                ct = i ;
                check = true ;
            }
        }
        
        if(check==true){
        s.erase(ct,1) ;
        cout << ans << " " << s << endl ;
        }
        else{
            s.erase(0,1) ;
        cout << c << " " << s << endl ;
        }
    }
return 0;
}