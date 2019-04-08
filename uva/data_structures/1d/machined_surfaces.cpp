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
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    #endif
	
	int N;
	
	while(cin>>N, N){
		
		cin.ignore(); //Usar siempre antes de un getline()
		vector<int> images(N);
		
		string data;
		int counterSpaces;
		int minSpaces = -1;
		
		for(int i = 0; i < N; i++){
			
			counterSpaces = 0;
			getline(cin, data);
			
			for(int j = 0; j < data.size(); j++){
				if(data[j] != 'X'){
					counterSpaces++; 
				}				
			}
			images[i] = counterSpaces;
			if (counterSpaces < minSpaces || minSpaces == -1){
				minSpaces = counterSpaces;
			}	
		}		
		int total = 0;
		int maxXs = 25 - minSpaces; //Tramo con mayor numero de Xs
		int tempXs;
				
		for(int i = 0; i<N; i++){
			tempXs = 25 - images[i]; //Tramo de Xs temporales
			total += maxXs - tempXs;
		}
		
		cout<<total<<"\n";
		
		
	}

    return 0;
}



