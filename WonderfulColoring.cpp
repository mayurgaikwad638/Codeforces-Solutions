#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        string s ; cin >> s ;
        int freq[26] = {0} ;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++ ;
        }
        int k = 0, a = 0 ;
        for(int i=0;i<26;i++){
            if(freq[i]==1) k++ ;
            else if(freq[i]>1) a++ ;
        }
       cout << a + (k/2) << endl ;
      
    }
return 0;
}