#include<iostream>
using namespace std ;
int main()
{
    int n , k ;
    cin >> n >> k;
    int arr[n] , count = 0 ;
    for(int i=1;i<=n;i++){
        cin >> arr[i] ;
    }
    if(arr[1]==0) cout << "0" << endl ;
    else{
        int maxscore = arr[k] ;
    for(int i=1;i<=n;i++){
        if(arr[i]>=maxscore && arr[i]>0){
            count++ ;
        }
        else
        break ;
    }
    cout << count << endl ;
    }

    
return 0;
}