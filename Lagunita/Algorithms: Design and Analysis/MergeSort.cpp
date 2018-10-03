//MergeSort by Carp-Bezverhnii Maxim
#include <iostream>

void Merge(int* A, int* L, int lc, int* R, int rc)
{
	int i=0, j=0, k=0;

	while(i < lc && j < rc)
	{
		if(L[i] < R[j])
			A[k++] = L[i++];
		else
			A[k++] = R[j++];
	}

	while(i < lc)
		A[k++] = L[i++];
	while(j < rc)
		A[k++] = R[j++];
}

void MergeSort(int* A, int n)
{
	if(n < 2) return;

	int i, mid = n/2;

	int* L = new int[mid];
	int* R = new int[mid+1];

	for(i = 0; i < mid; i++)
		L[i] = A[i];
	for(i = mid; i < n; i++)
		R[i-mid] = A[i];

	MergeSort(L, mid);
	MergeSort(R, n-mid);
	Merge(A, L, mid, R, n-mid);

	delete[] L;
	delete[] R;
}

int main(int argc, char** argv)
{	
	int a[] = {9, 8, 7, 0, 1, 2, 3, 6, 5, 4};

	MergeSort(a, sizeof(a)/sizeof(a[0]));

	for(int k : a)
		std::cout << "[" << k << "] ";

	std::cout << std::endl;

	return 0;
}