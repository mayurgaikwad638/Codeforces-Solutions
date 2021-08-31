#include<iostream>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    int ct1 = 0, ct2 = 0, ct3 = 0; 
    for(int i=0;i<s.size();i++){
        if(s[i]=='+') continue ;

        else if(s[i]=='1') ct1++ ;

        else if(s[i]=='2') ct2++ ;

        else if(s[i]=='3') ct3++ ;

    }
    
        for(int i=0;i<ct1;i++){
            if(ct2==0 && ct3==0 && i==ct1-1){
                cout << "1" ;
            }
            else
            cout << "1" << "+" ;
        }
        for(int i=0;i<ct2;i++){
            if(ct3==0 && i==ct2-1){
                cout << "2" ;
            }
            else
            cout << "2" << "+" ;
        }
        for(int i=0;i<ct3;i++){
            if(i==ct3-1) cout << "3" ;
          else cout << "3" << "+" ;
        }

        
return 0;
}