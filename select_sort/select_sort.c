void swap(int *one, int *two) {
	int temp = *one;
	*one = *two;
	*two = temp;
}

void selectSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int b = i + 1; b < size; b++) {
			if (arr[b] < arr[i]) {
				swap(&arr[i], &arr[b]);
			}
		}
	}
}