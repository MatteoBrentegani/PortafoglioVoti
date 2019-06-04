#include <iostream>

using namespace std;

int main(){
    int a, b, x;
    int count=0;
    bool continua=true;
    
    cin >> a >> b;
    if (b%a!=0){
        continua=false;
    }
    else{
        x= b/a;
        
    }
    
    while (x!=1 && continua==true){
        if(x%3==0){
            x=x/3;
            count ++;
        }
        else if(x%2==0){s
            x=x/2;
            count ++;
        }
        else{
            continua=false;
        }
    }
    if (continua==false) {
        cout <<"-1";
    }
    else{
        cout << count << endl;
    }
}

