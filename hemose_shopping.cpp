#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std ;

bool sortcheck(vector<ll> v,ll n){
    vector<ll> s ;
    s =  v ;

    sort(s.begin(),s.end()) ;

    for(int i=0;i<n;i++){
        if(s[i]!=v[i]){
            return false ;
        }
    }
    return true ;
}
int main()
{
        ll t ; cin >> t ;
        while(t--){
            ll n, x ;
            cin >> n >> x ;
            vector<ll> arr(n) ;
            for(int i=0;i<n;i++){
                cin >> arr[i] ;
            }

            if(x==n){
                if(sortcheck(arr,n)) cout << "YES" << endl ;
                else cout << "NO" << endl ;
            }
            else if(x<=n/2){
                cout << "YES" << endl ;
            }
            else {
                ll xx = n-x ;

                vector<ll> v ;
                for(int i=0;i<xx;i++){
                    v.push_back(arr[i]) ;
                }
                for(int i=n-1;i>=n-xx;i--){
                    v.push_back(arr[i]) ;
                }

                sort(v.begin(),v.end()) ;

                vector<ll> vv ;
                for(int i=0;i<v.size()/2;i++){
                    vv.push_back(v[i]) ;
                }
                for(int i=xx;i<n-xx;i++){
                    vv.push_back(arr[i]) ;
                }

                for(int i=v.size()/2;i<v.size();i++){
                    vv.push_back(v[i]) ;
                }

                if(sortcheck(vv,n)) cout << "YES" << endl ;
                else cout << "NO" << endl ;
            }

        }
return 0;
}