// Problem statement
// You are given an array “ARR” of size N. Your task is to find out the sum of maximum and minimum elements in the array.

// Follow Up:
// Can you do the above task in a minimum number of comparisons?
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 10^5 
// -10^9 <= ARR[i] <= 10^9

// Time limit: 1 second

#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int min =INT_MAX;
	int max = INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]<min) {
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}

	return max+min;
}
