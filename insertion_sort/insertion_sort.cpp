void insertionSort(int arr[], int size) {
	int out, in, temp;
	for (out = 1; out < size; out++) {
		in = out;
		temp = arr[in];
		while (in > 0 && temp < arr[in - 1]) {
			arr[in] = arr[in - 1];
			in--;
		}
		arr[in] = temp;
	}
}