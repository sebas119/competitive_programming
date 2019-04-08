#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <bitset>
#include <cstring>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;


ll _sieve_size;
bitset<10000010> bs;
vi primes;

void sieve(ll upperbound) {
	_sieve_size = upperbound + 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i = 2; i <= _sieve_size; i++){
		if (bs[i]){
			for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
			primes.push_back((int)i);
		}
	}
}

bool isPrime(ll N){
	if (N <= _sieve_size) return bs[N];
	for (int i = 0; i < (int)primes.size(); i++)
		if(N % primes[i] == 0) return false;
	return true;
}

ll numDiv(ll N){
	ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
	while(PF * PF <= N){
		ll power = 0;
		while(N % PF == 0){
			N /= PF; power++;
		}
		ans *= (power + 1);
		PF = primes[++PF_idx];
	}
	if (N != 1) ans *= 2;
	return ans;
	
}


int main() {

    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    sieve(10000000);
    
    int N, L, U, max = 0, pos, temp;
    cin>>N;
    
    while(N--){
    	cin>>L>>U;  //lower and upper ranges includes
    	
    	for(int i = L; i<=U; i++){
    		temp = numDiv(i);
    		if(max < temp){
    			max = numDiv(i);
    			pos = i;
			}
		}
    	
		cout<<"Between "<<L<<" and "<<U<<", "<<pos<<" has a maximum of "<<max<<" divisors."<<"\n";
		max = 0;    	
	}
    
    return 0;
}



