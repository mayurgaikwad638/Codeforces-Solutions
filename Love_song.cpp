#include<iostream>
using namespace std ;
int main()
{
    int n , q ; 
    cin >> n >> q ;
    string s ;
    cin >> s ;
    int freq[s.size()+1] = {0} ;
    freq[0] = 0 ;
    for(int i=1;i<=s.size();i++){
        freq[i] = s[i-1]-'a' + freq[i-1] + 1 ; 
    }

    while(q--){
        int l, r ;
         cin >> l >> r ;
         
         
         cout << freq[r]-freq[l-1] << endl ;
    }
return 0;
}