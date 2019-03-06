#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stdio.h>

using namespace std;

int datacycle(int n){
    int cycle = 1;
    while ( n != 1){
        cycle++;
        if (n % 2 != 0){
            n = 3*n + 1;            
        }else {
            n = n / 2;
        }
    }
    return cycle;
}

int main(int argc, char** argv) {

    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    int i, j;
    int maxcycle = 1, cycle;
    
    while (cin>>i){
        cin>>j;
        
        if(i <= j){
            for(int x = i; x <= j; x++){
                cycle = datacycle(x);                
                maxcycle = max(maxcycle, cycle); //Me da el ciclo maximo
            }
        }else if(i > j){
            for(int x = j; x <= i; x++){
                cycle = datacycle(x);                
                maxcycle = max(maxcycle, cycle); //Me da el ciclo maximo
            }
        }
        
        cout<<i<<" "<<j<<" "<<maxcycle<<"\n";
        maxcycle = 0;        
    }

    return 0;
}

