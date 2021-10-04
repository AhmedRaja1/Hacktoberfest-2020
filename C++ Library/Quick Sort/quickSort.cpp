#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int partition(vector<int> &a, int l, int r) {
	int pivot = a[r]; // making last element as pivot element
	int pi = l - 1;
	for(int i = l; i < r; ++i) {
		if(a[i] < pivot) {
			pi++;
			swap(a[pi], a[i]);
		}
	}
	swap(a[pi + 1], a[r]);
	return pi + 1;
}

void quickSort(vector<int> &a, int l, int r){
	if(l < r) {
        /*
            Place pivot element to it's place 
            then do the same for both right and left subarray
        */
		int pi = partition(a, l, r);
		quickSort(a, l, pi - 1);
		quickSort(a, pi + 1, r);
	}
}

/*
	Time complexity = O(nlog(n))
	Space Complexity = O(n)
*/

int main() {
	int n;
	cin >> n;
	vector<int> a(n, 0);
	for(int &i: a) cin >> i;
	quickSort(a, 0, n - 1);
	for(int i: a) cout << i << " ";
	return 0;
}