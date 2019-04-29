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
    //freopen("out.txt", "w", stdout);
    #endif
    
    int T;
    
    while(cin >> T){
    	vector< vector<int> > matrix(T, vector<int>(T));
    	for(int i = 0; i < T; i++){
    		for(int j = 0; j < T; j++){    	
				cin >> matrix[i][j];
			}
		}
		int sumRows, sumCol;
		int ans = 0;
		for(int i = 0; i < T; i++){
			sumRows = 0, sumCol = 0;
			for(int j = 0; j < T; j++){
				sumRows += matrix[i][j];
				sumCol += matrix[j][i];
			}
			cout<< "sumaRows: " << sumRows<<'\n';
			cout<< "sumaCol: " << sumCol << '\n';
		}
		
	}
    
    
	
	
	
    return 0;
}



