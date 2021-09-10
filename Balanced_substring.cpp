#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        string s ; cin >> s ;

        if(n==1){
            cout << "-1" << " " << "-1" << endl ;
        }
        else{
            int i ;
            for(i=0;i<s.size()-1;i++){
                if(s[i]!=s[i+1]){
                    cout << i+1 << " " << i+2 << endl ;
                    break ;
                }
            }
            if(i==s.size()-1){
                cout << "-1" << " " << "-1" << endl ;
            }

        }
    }
return 0;
}