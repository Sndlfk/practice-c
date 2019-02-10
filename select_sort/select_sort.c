void swap(int *one, int *two) {
	int temp = *one;
	*one = *two;
	*two = temp;
}

void selectSort(int arr[], int size) {
	for (int out = 0; i < size - 1; out++) {
		for (int in = out + 1; b < size; in++) {
			if (arr[in] < arr[out])
				swap(&arr[out], &arr[in]);
		}
	}
}
