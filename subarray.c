/*In an array X of size M where the array elements contain values from 1 to M with duplicates, the task is to find total number of sub arrays which start and end with the same element.*/
#include<iostream>
using namespace std; 
void cntArray(int A[], int N) 
{ 
	int result = 0; 
	for (int i = 0; i < N; i++) 
	{ 
		result++; 
		int current_value = A[i]; 
		for (int j = i + 1; j < N; j++)
		{ 
			if (A[j] == current_value) 
			{ 
				result++; 
			} 
		} 
	} 
	cout << result << endl; 
} 
int main() 
{ 
	int A[] = { 1, 2, 1, 5, 2 }; 
	int N = sizeof(A) / sizeof(int); 
	cntArray(A, N); 
	return 0; 
} 
