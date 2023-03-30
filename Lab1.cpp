//#include <iostream>
//using namespace std;
//template <typename T>
//inline T const& Max(T const& a, T const& b) {
//	return a < b ? b : a;
//}
//
//int main() {
//	string s1 = "Hello";
//	string s2 = "World";
//	cout << "Max(s1,s2): " << Max(s1, s2) << endl;
//
//	int i = 34;
//	int j = 41;
//	cout << "Max (i,j): " << Max(i, j) << endl;
//
//	double x = 17.8;
//	double y = 25.4;
//	cout << "Max (x,y): " << Max(x, y) << endl;
//	return  0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int* ptr;
//	ptr = new int;
//
//	if (ptr == NULL) {
//		cout << "Memory allocation failed" << endl;
//		return 1;
//	}
//	*ptr = 42;
//	cout << "The value of the dynamically allocated memory is: " << *ptr << endl;
//	delete ptr;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int* m = NULL;
//
//	m = new(nothrow) int;
//	if (!m) {
//		cout << "allocation of memory failed \n";
//	}
//	else{
//		*m = 39;
//		cout << "Value of m: " << *m << endl;
//	}
//
//	float* f = new float(40.25);
//	cout << "Value of f: " << *f << endl;
//
//	int size = 5;
//	int* arr = new(nothrow) int[size];
//	if (!arr) {
//		cout << "allocation of memory failed \n";
//	}
//	else {
//		for (int i = 0; i < size; i++)
//			arr[i] = i + 1;
//			cout << endl << endl;
//			cout << "Value store in block of memory: \n";
//
//		for (int i = 0; i < size; i++)
//			cout << arr[i] << " ";
//			cout << endl << endl;
//		
//		for (int j = size - 1; j >= 0; j--)
//			cout << arr[j] << " ";
//
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int fibonacci(int n) {
//	if (n <= 1) return n;
//	else return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//	int n;
//	cout << "Enter a positive integer: ";
//	cin >> n;
//
//	cout << "Fibonacci sequence up to " << n << "terms: " << endl;
//	for (int i = 1; i < n; i++)
//	cout << fibonacci(i) << " ";
//}

//#include <iostream>
//using namespace std;
//
//void print(int arr[], int size, int i) {
//	if (i == size) {
//		cout << endl;
//		return;
//	}
//	cout << arr[i] << " ";
//	i++;
//	print(arr, size, i);
//}
//
//int main() {
//	int arr[] = { 3, 5, 6, 8, 1 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	print(arr, n, 0);
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int numbers[5] = { 10,20,30,40,50 };
//	int* p;
//	p = numbers;
//	cout << "Array elements using pointer index ++:" << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << "*p(p + " << i << ") = " << *(p + i) << endl;
//	}
//	
//	for (int i = 0; i < 5; i++) {
//		cout << "*p(p ++) = " << *(p ++) << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int partition(int arr[], int start, int end)
//{
//
//	int pivot = arr[start];
//
//	int count = 0;
//	for (int i = start + 1; i <= end; i++) {
//		if (arr[i] <= pivot)
//			count++;
//	}
//
//	// Giving pivot element its correct position
//	int pivotIndex = start + count;
//	swap(arr[pivotIndex], arr[start]);
//
//	// Sorting left and right parts of the pivot element
//	int i = start, j = end;
//
//	while (i < pivotIndex && j > pivotIndex) {
//
//		while (arr[i] <= pivot) {
//			i++;
//		}
//
//		while (arr[j] > pivot) {
//			j--;
//		}
//
//		if (i < pivotIndex && j > pivotIndex) {
//			swap(arr[i++], arr[j--]);
//		}
//	}
//
//	return pivotIndex;
//}
//
//void quickSort(int arr[], int start, int end)
//{
//
//	// base case
//	if (start >= end)
//		return;
//
//	// partitioning the array
//	int p = partition(arr, start, end);
//
//	// Sorting the left part
//	quickSort(arr, start, p - 1);
//
//	// Sorting the right part
//	quickSort(arr, p + 1, end);
//}
//
//
//int main() {
//	int arr[] = { 9,8,3,4,2,1,7,5,8 };
//	int n = 8;
//	quickSort(arr, 0, n - 1);
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//		cout << endl << endl;
//	}
//}