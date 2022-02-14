#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
int index(int arr[], int length) 
{ 
	int rightside = 0;  
	int leftside = 0;
	int i;

	for (i = 0; i < length; ++i) 
	rightside += arr[i]; 

	for (i = 0; i < length; ++i) 
	{ 
	rightside -= arr[i]; 

	if (leftside == rightside) 
	return i; 
	leftside += arr[i]; 
	} 
	return -1; 
} 
int main() 
{ 
	int arr[] = { 3,2,5,4,1,1,1,1,1,3,2}; 
	int arr_size = sizeof(arr) / sizeof(arr[0]); 
	cout << index(arr, arr_size); 
	return 0; 
} 
