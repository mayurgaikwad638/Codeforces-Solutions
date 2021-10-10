#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
#define ll long long 
// #define tc int t sc cin >> t sc while(t--)
#define sc ;
// #define for(i,j,k) for(int i=j;i<k;i++)
#define vi vector<int> 
#define vl vector<long long
#define pb push_back
#define map map<int,int>
#define mapl map<ll,ll>
ll mod=1e9+7 ; 
int main(){

    int t; cin >> t ;
    while(t--){
        
        int n ; cin >> n ;
        
        string a,b; 
        cin >> a >> b  ;
        // cout << a << " " << b ;
        for(int i=1;i<n;i++){
            if(a[i]=='0' or b[i]=='0'){
                if(i==n-1 or i==n-2){
                cout << "YES" << endl ;
                break ;
               }
                continue;
            }
            else{
                cout << "NO" << endl ;
                break;
            }

            if(i==n-1 or i==n-2){
                cout << "YES" << endl ;
                break ;
            }
        }

    }
    return 0 ;
}