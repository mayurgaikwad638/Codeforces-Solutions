#include<iostream>
using namespace std ;
#define lli long long int
int main()
{
    lli x , n ;
    cin >> n >> x ;
    int ct = 0 ;

    for(int i=1;i<=n;i++){
        lli check = n * i ;
        if(x<=check and x%i==0){
            ct++ ;
           // cout <<  i << " " << ct << endl ;
        }
    }
    cout << ct << endl ;
return 0;
}