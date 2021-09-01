#include<iostream>
#include<vector>
using namespace std ;
int main()
{
        int t; cin >> t ;
        while(t--){
        int n ;
        cin >> n ;

        string s ;
        cin >> s ;

        vector<int> v(26,0) ;
        v[s[0]-'A'] = 1 ;
        int i ;
        //char A ;
      
        
        for(i=1;i<s.size();i++){
            if(s[i]==s[i-1]) continue ;
            if(v[s[i]-'A']==1){
                cout << "NO" << endl ;
                break ;
            }
            else{
                v[s[i]-'A'] = 1 ;
            }
        }
        if(i==s.size()) cout << "yes" << endl ;
    }
return 0;
}