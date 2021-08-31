#include<iostream>
using namespace std ;
int main()
{
    
    int row , column , count = 0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x ;
            cin >> x ;
            if(x==1){
                row = i ;
                column = j ;
                break ;
            }
        }
    }
    if(row==3 & column==3){
    cout << "0" << endl ;
    return 0 ;
    }
    else if(row<3){
        while(row!=3){
        row++ ;
        count++ ;
        }
    }
    else if(row>3){
        while(row!=3){
        row-- ;
        count++ ;
        }
    }


    if(column<3){
        while(column!=3){
        column++ ;
        count++ ;
        }
    }
    else if(column>3){
        while(column!=3){
        column-- ;
        count++ ;
        }
    }

    cout << count << endl ;

return 0;
}