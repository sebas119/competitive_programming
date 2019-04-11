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

void passByVal(int val);
void passByRef(int & ref);
void passByPtr(int * ptr);

int main() {   

	int x = 5;
	printf("x = %i\n", x);
	passByVal(x); //Lo que hace es una copia del valor de x
	printf("x = %i\n", x);
	passByRef(x);
	printf("x = %i\n", x);
	
	printf("This is for pointer\n");
	
	int* xptr = &x;
	printf("x = %i\n", x);
	printf("*xptr = %i\n", *xptr);
	passByPtr(xptr);
	printf("x = %i\n", x);
	printf("*xptr = %i\n", *xptr);
	

    return 0;
}

void passByVal(int val){
	val = 10;
	printf("val = %i\n", val);
}

void passByRef(int & ref){
	ref = 20;
	printf("ref = %i\n", ref);
}


void passByPtr(int * ptr){
	*ptr = 30;
	printf("*ptr = %i\n", *ptr);
}


