#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;

int main(){
	int b[1010];
	int n;
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	while(true){
		cin>>n;
		if(n == 0){
			break;
		}
		
		while(true){
			cin>>b[0];
			
			if(b[0] == 0){
				printf("\n");
				break;				
			}
			
			for(int i = 1; i < n; i++){
				cin>> b[i];
			}
			
			stack<int> train;			
			int pos = 1;
			bool bx = true;
			
			for(int i = 0; i < n; i++){
				if(train.empty()){
					train.push(pos);
					pos++;
				}
				while(!train.empty() && train.top() != b[i] && pos <= n){
					train.push(pos);
					pos++;
				}
				if(train.top() == b[i]){
					train.pop();
				}else {
					bx = false;
					break;
				}
			}
			if(bx){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}
	}
}
