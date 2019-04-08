#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <cstdio>
#include <map>
#include <iomanip>

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
	
	int t; 
	map<string, int> forest;
	string tree;	
	cin >> t;
	
	cin.ignore();
	cin.ignore();
	
	for(int i = 0; i < t; i++){
		int countTotal = 0;
		forest.clear();
		if(i > 0) cout<<"\n";
		
		while(getline(cin, tree) && tree != ""){ //Preguntar porque la segunda condicion
			forest[tree]++; //Ingresa en el forest el arbol y le asigna una llave (Preguntar)
			countTotal++;			
		}
		map<string, int>::iterator itr;
		for(itr = forest.begin(); itr != forest.end(); itr++){			
			cout<<itr->first<<" ";
			printf("%.4f\n", itr->second * 100.0 / countTotal);
		}		
		
	}
	

    return 0;
}



