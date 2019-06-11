#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    int out = 0;

    if(n%2 == 0){
        out = pow(2, (int)(n/2));
    }

    cout << out << endl;

    return 0;

}