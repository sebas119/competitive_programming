#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
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
    cin>>T;
    string s, indexLine, dataLine;    
    cin.ignore();
    while(T--){    	
    	getline(cin, s); //Linea en blanco
    	
    	getline(cin, indexLine);
    	
    	stringstream check1(indexLine);
    	check1 << indexLine;
    	vector<int> index;
    	string intermediate;
    	while(getline(check1, intermediate, ' ')){
    		stringstream convert(intermediate);
    		int x = 0;
    		convert >> x; //Convierte de string a integer
    		index.push_back(x);
		}		
		getline(cin, dataLine);
		stringstream check2(dataLine);
		check2 << dataLine;
		string data[5000];
		int n = 0;
		while(getline(check2, intermediate, ' ')){
			data[index[n] - 1] = intermediate;
			n++;
		}
		
		for(int i = 0; i < index.size(); i++){			
			cout << data[i] << endl;
		}
		if(T > 0){
			cout << '\n';
		}	
	}


    return 0;
}



