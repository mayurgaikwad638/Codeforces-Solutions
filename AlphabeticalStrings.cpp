#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        string s ; cin >> s ;
        int ocr, ct=0 ;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                ocr=i ;
                ct++ ;
            }
        }
        if(ct>1 || ct==0){
            cout << "NO" << endl ;
            continue ;
        }
        else{
            int j = ocr-1 ;
            int k = ocr+1 ;
            int a = 'b' ;
            bool flag = true ;
            while(j>=0 || k<s.size()){
                
                if(s[j]==char(a)){
                    j-- ;
                    char(a++) ;
                
                }
                else if(s[k]==char(a)){
                    k++ ;
                    char(a++) ;
                }
                else{
                    flag = false ;
                    break ;
                }
            }
            if(flag==false)
            cout << "NO" << endl ;
            else cout << "YES" << endl ; 
        }
    }
return 0;
}