#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r, int size)
{
    int i = l;
    int j = m + 1;
    int k = l;
 
    /* create temp array */
    int temp[size];
 
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    /* Copy the remaining elements of first half, if there are any */
    while (i <= m) {
        temp[k] = arr[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of second half, if there are any */
    while (j <= r) {
        temp[k] = arr[j];
        j++;
        k++;
    }
 
    /* Copy the temp array to original array */
    for (int p = l; p <= r; p++) {
        arr[p] = temp[p];
    }
}

void mergeSort(int a[], int low, int high, int size){
	if (low < high){
		int mid = (low + high)>>1;
		mergeSort(a, low, mid, size);
		mergeSort(a, mid+1, high, size);
		merge(a, low, mid,  high, size);
	}
} 
	mergeSort(a, 0, n-1, n);
	for (int i=0; i<n; i++) cout << a[i]<<" ";
	
	return 0;
}
