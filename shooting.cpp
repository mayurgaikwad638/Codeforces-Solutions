#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    vector<int> v(n+1) ;
    vector<pair<int,int>> sortedv ;
    for(int i=1;i<=n;i++){
        cin >> v[i] ;
        sortedv.push_back({v[i],i}) ;
    }

    sort(sortedv.begin(),sortedv.end()) ;

    // for(int i=sortedv.size()-1;i>=0;i--){
    //     cout << sortedv[i].first << " " << sortedv[i].second << endl ;
    // }
    int ans = 0 , x = 0 ;
    vector<int> res ;
    //cout << "hello" ;
    for(int i=sortedv.size()-1;i>=0;i--){
        ans += sortedv[i].first * x + 1 ;
        res.push_back(sortedv[i].second) ;
        x++ ;
    }
   // cout << "hello" ;
    cout << ans << endl ;
    for(int i=0;i<res.size();i++){
        cout << res[i] << " " ;
    }
return 0;
}