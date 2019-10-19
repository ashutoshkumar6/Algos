#include <bits/stdc++.h> 
using namespace std; 
int jumpSearch(int arr[], int x, int n) 
{ 
	int step = sqrt(n); 
	int prev = 0; 
	while (arr[min(step, n)-1] < x) 
	{ 
		prev = step; 
		step += sqrt(n); 
		if (prev >= n) 
			return -1; 
	} 
	while (arr[prev] < x) 
	{ 
		prev++; 
		if (prev == min(step, n)) 
			return -1; 
	} 
	// If element is found 
	if (arr[prev] == x) 
		return prev; 
	return -1; 
} 
int main() 
{ 
	int arr[] = { 1,2,8,14,14,387,510,699,846,875 }; 
	int x = 875; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int index = jumpSearch(arr, x, n); 
	cout << "\nNumber " << x << " is at index " << index; 
	return 0; 
} 
