int binarySearch(int keySearch, int arr[], int size) {
	int first = 0;
	int last = size - 1;
	int mid = 0;

	while (first <= last) {	
		mid = (first + last) / 2;
		if (arr[mid] == keySearch)
			return mid;
		else {
			if (keySearch > arr[mid]) {
				first = mid + 1;
			} else if(keySearch < arr[mid]){
				last = mid - 1;
			}
		}
	}

	return -1;
}		