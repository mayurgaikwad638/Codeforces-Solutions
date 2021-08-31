#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int h, w ;
        cin >> h >> w ;
        int arr[h][w] ;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                arr[i][j] = 0 ;
            }
        }
        for(int i=0;i<h;i+=2){
            arr[i][w-1] = 1 ;
            arr[i][0] = 1 ;
        }
        for(int j=2;j<=w-3;j+=2){
            arr[0][j] = 1 ;
            arr[h-1][j] = 1 ;
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cout << arr[i][j] ;
            }cout << endl ;
        }cout << endl ;
    }
return 0;
}