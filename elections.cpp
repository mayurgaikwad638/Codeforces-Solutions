#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ; 
    while(t--){
        long long a,b,c ;
        cin >> a >> b >> c ;
        int aa,bb,cc ;
        if(a==b && b==c){
            cout << 1 << " " << 1 << " " << 1 << endl ;
            continue ;
        }
        if(a>b){
            if(a>c){
                aa = 0;
                bb = a-b+1 ;
                cc= a-c+1 ;
            }
            else if(a==c){
                cc = 1;
                aa = 1 ;
                bb = c-b+1 ;
            }else{
                aa = c-a+1 ;
                bb = c-b+1 ;
                cc = 0 ;
            }
            
        }
        else if(b>c){
            if(a==b){
                aa = 1 ;
                bb = 1 ;
                cc= b-c+1 ;
            }
            else{
                aa = b-a+1 ;
                bb =  0 ;
                cc = b-c+1 ;
            }
        }else if(c==b){
            cc = 1 ;
            bb = 1 ;
            aa = c-a+1 ;
        }
        else{
            cc = 0 ;
            bb = c-b+1 ;
            aa = c-a+1 ;
        }
       
       cout << aa << " " << bb << " " << cc << endl;
    }
return 0;
}