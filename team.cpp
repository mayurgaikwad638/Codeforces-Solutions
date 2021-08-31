#include<iostream>
using namespace std ;
int main()
{
    int n; cin >> n ;
    int count = 0 ;
    while(n--){
        int arr[3] = {0} ;
        int problemct = 0;
        for(int i=0;i<3;i++){

            int x; cin >> x ;

            if(x==1) problemct++ ;

        }

        if(problemct>1) count++ ;
    }

    cout << count << endl ;
return 0;
}