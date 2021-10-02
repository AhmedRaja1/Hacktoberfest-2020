#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &array, int left, int mid, int right){
	vector<int> temp;
	int i = left, j = mid + 1;
	while(i <= mid && j <= right) {
		if(array[i] < array[j])
			temp.push_back(array[i++]);
		else 
			temp.push_back(array[j++]);
	}
	while(i <= mid) temp.push_back(array[i++]);
	while(j <= right) temp.push_back(array[j++]);
	
	// Placing merged array in the original array
	for(int i = 0; i < temp.size(); ++i) {
		array[i + left] = temp[i];
	}
}

void mergeSort(vector<int> &array, int left, int right) {
	if(left < right) {
		/*
			Divide the array into 2 parts 
			After both parts are sorted we can merge 
			those two parts by calling merge()
		*/
		int mid = (left + right) >> 1; // dividing by 2
		mergeSort(array, left, mid);
		mergeSort(array, mid + 1, right);
		merge(array, left, mid, right); 
	}
}

/*
	Time complexity = O(nlog(n))
	Space Complexity = O(n)
*/

int main() {
	int size;
	cin >> size;
	vector<int> array(size, 0);
	for(int &i: array) cin >> i;
	mergeSort(array, 0, size - 1);
	for(int i: array) cout << i << " ";
	return 0;
}