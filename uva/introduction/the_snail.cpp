#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    
    //H is the height of the well
    //U Distance in feet that the snail can climb during day
    //D Distance in feet that the snail down during night
    //F fatigue factor in percentage
    int day, H, D, F;    
    float U, height, factor;
	while(cin>>H, H){
		cin>>U>>D>>F;		
		day = 1, height = 0, factor = U * F / 100;
		while(true){
			height += U;  //Escala
			if (U > 0){
				U -= factor; //Se cansa
			}
			if (height > H){
				break; //Salio del pozo
			}
			height -= D;  //Por la noche cae D
			if (height < 0){
				break; //la altura llega a valores negativos
			}
			day++; //Cuenta los dias
		}
		
		if(height < 0){
			printf("failure on day %d\n", day);
		}else{
			printf("success on day %d\n", day);
		}
	}


    return 0;
}



