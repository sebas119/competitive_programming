#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    /*
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    */
    int people, budget, hotel, weeks;
    int costHotel, bedHotel, minCost;
    
    
    while(cin>>people){
        minCost = 2000000000;        
        cin>>budget>>hotel>>weeks;
        
        while(hotel--){
            cin>>costHotel;
            
            for(int i=0; i<weeks; i++){ //porque no se puede utilizar weeks--
                cin>>bedHotel;
                
                if (bedHotel >= people){
                    minCost = min(minCost, people * costHotel);
                    string s; //Necesito explicacion de este tema
                    getline(cin, s);
                    break;
                    
                }                
            }
        }
        
        
        if (minCost != 2000000000 && minCost <= budget){
            cout<< minCost << "\n";
        }else {
            cout<< "stay home" << "\n";
        }
    }
    

    return 0;
}

