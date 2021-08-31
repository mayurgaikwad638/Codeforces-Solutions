#include<iostream>
using namespace std ;
int main()
{
    string s ; cin >>s ;
    int ctlow = 0, ctup = 0 ;
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            ctlow++ ;
        }
        else{
            ctup++ ;
        }
    }
    if(ctlow>ctup){
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]) ;
            }
        }
    }
    else if(ctlow<ctup){
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]) ;
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]) ;
            }
        }
    }

    cout << s << endl ;
return 0;
}