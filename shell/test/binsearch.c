#include <stdio.h>

void BinSearch(int *arr, int n, int key) {

	int l = 0, r = n, cnt = 0, pos;
	while(l <= r) {
		cnt++;
		int mid = (l + r) >> 1;
		if(arr[mid] == key) {
			pos = mid;
			printf("cnt: %d, pos: %d\n", cnt, key);
			return;	
		}

		if(arr[mid] < key)
			l = mid + 1;
		else if(arr[mid] > key)
			r = mid - 1;
	}
	printf("not found\n");
}


int main() {
	
	int n;
	scanf("%d", &n);
	int arr[20]; 
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int key;
	scanf("%d", &key);
	BinSearch(arr, n, key);

	return 0;
}
