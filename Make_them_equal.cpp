#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
#define ll long long 
#define tc int t sc cin >> t sc while(t--)
#define sc ;
#define for(i,j,k) for(int i=j;i<k;i++)
#define vi vector<int> 
#define vl vector<long long>
#define pb push_back
#define map map<int,int>
#define mapl map<ll,ll>
ll mod=1e9+7 ; 
int main(){
    tc {
        int n ; char c ;
        cin >> n >> c ;

        string s ; cin >> s ;
        int idx = -1 , ct = 0;
        for(i,0,s.size()){
            if(s[i]!=c){
                ct++ ;
            }
        }
        if(ct==0){
            cout << 0 << endl ;
            continue ;
        }

        for(i,0,s.size()){
            if(s[i]==c){
                idx = i ;
            }
        }
        if(idx>=n/2){
            cout << 1 << endl;
            cout << idx+1 << endl ;
        }else{
           
                cout << 2 << endl ;
                cout << n-1 << " " << n << endl ;
            
          }

        
    }
    return 0 ;
}