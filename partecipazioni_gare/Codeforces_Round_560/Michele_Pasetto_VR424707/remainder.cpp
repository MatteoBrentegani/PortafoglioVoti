#include <cmath>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    string num;
    cin >> num;
    int cambi=0;
    for(int i=n-x;i<n;i++){
        if (i==n-y-1){
            if (num[i]=='0'){
                cambi++;
            }
        }else{
            if (num[i]=='1'){
                cambi++;
            }
        }
    }
    cout << cambi;
    return 0;
}
