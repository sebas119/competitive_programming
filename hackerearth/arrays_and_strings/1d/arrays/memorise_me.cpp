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
	cin>>N;
	vector<int> data(N);
	
	for(int i = 0; i < N; i++){
		cin>>data[i];
	}
	
	int Q;
	cin>>Q;
	int b;		
	sort(data.begin(), data.end());  //O(NlogN)
	while(Q--){
		cin>>b;	
		
		//lower bound this is an algo with [O(log n)] that will return
		//an iterator to the first element equal to or greater than
		//a given value in a sorted sequence
				
		vector<int>::iterator it = lower_bound(data.begin(), data.end(), b);
		vector<int>::iterator it2 = upper_bound(data.begin(), data.end(), b);
		int ans = it2 - it;
		
		if(ans != 0){
			cout<<ans<<'\n';
		}else{
			cout<<"NOT PRESENT"<<'\n';
		}
		
	}
	
    return 0;
}



