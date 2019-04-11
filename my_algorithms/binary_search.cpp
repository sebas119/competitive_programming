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


//Binary search recursive implementation

int binarySearchRecursive(int arr[], int left, int right, int x){
	if(right >= left){
		int middle = left + (right - left) / 2;
		
		if(arr[middle] == x){
			return middle;
		}
		
		if(arr[middle] > x){
			return binarySearchRecursive(arr, left, middle - 1, x);
		}
		
		return binarySearchRecursive(arr, middle + 1, right, x);
	}
	
	return -1;
}

//Binary search iterative implementation

int binarySearchIterative(int arr[], int left, int right, int x){
	while(left <= right){
		int middle = left + (right - left) / 2;
		
		if(arr[middle] == x){
			return middle;
		}
		
		if(arr[middle] < x){
			left = middle + 1;
		}else {
			right = middle - 1;
		}
	}
	return -1;
}


int main() {

    int arr[] = { 2, 3 , 4, 20, 30 };
	int x = 20;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearchIterative(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is no present in the array" : cout << "Element is present at index "<< result;

    return 0;
}



