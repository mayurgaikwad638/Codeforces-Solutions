#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int b, p, f ;
        cin >> b >> p >> f ;
        int h, c ;
        cin >> h >> c ;

        int profit = 0 ;
        if(b==1){
             cout << profit << endl ;
             continue ;
        }
        if(c>=h){
            if(f*2 >= b){
                profit = b/2 * c ;
            }
            else{
                profit = f * c ;
                b = b - (f*2) ;
            }

            if(p*2 >=b){
                profit += b/2 * h ;
            }
            else{
                profit += p * h ;
            }
            
        }else{
            if(p*2 >=b){
                profit = b/2 * h ;
            }else{
                profit = p * h ;
                b = b - (p*2) ;
            }

            if(f*2 >=b){
                profit += b/2 * c ;
            }else{
                profit += f * c ;
            }
        }
        cout << profit << endl ;
    }
return 0;
}