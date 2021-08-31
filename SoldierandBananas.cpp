#include<iostream>
using namespace std ;
int main()
{
    int k, n, w ;
    cin >> k >> n >> w ;
    int dollar = 0 ;
    for(int i=1;i<=w;i++){
        dollar += i * k ;
    }
    if(dollar>n){
        cout << dollar - n << endl ;
    }
    else{
        cout << "0" << endl ;
    }
return 0;
}