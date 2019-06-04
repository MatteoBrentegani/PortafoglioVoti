#include <iostream>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    int maxrip=0;
    int orerip=0;
    int oreinizio=0;
    bool inizio=true;
    for (i=0; i<n; i++) {
        int a;
        cin >> a;
        if (a==1){
            orerip++;
            if (orerip>maxrip){
                maxrip = orerip;
            }
            if (inizio==true){
                oreinizio++;
            }
            if (i==n-1){
                orerip+=oreinizio;
                if (orerip>maxrip){
                    maxrip = orerip;
                }
            }
        }
        else{
            if (inizio == true){
                inizio=false;
            }
            orerip=0;
        }
    }
    cout << maxrip;
}
