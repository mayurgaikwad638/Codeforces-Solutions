#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    int ct = 1 ;
    int maxct = INT_MIN ;

    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            ct++ ;
        }
        else{
            maxct = max(maxct,ct) ;
            ct = 1 ;
        }
    }

    maxct = max(ct,maxct) ;
    cout << maxct << endl ;
return 0;
}