#include <cmath>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;
    int contests[num];
    for (int i=0;i<num;i++){
        scanf("%d",&contests[i]);
    }
    int k=1;
    sort(contests, contests+num);
    int i;
    for (i=0;i<num && contests[i]<k;i++);
    for (int j=i;j<num;j++){
        if(contests[j]>=k){
            k++;
        }
    }
    cout << k-1;
    return 0;
}
