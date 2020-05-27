#include <iostream>

using namespace std;

int count(int arr[], int value, int n)
{
	int count=0;
	for (int i=0; i < n; i++){
		if (arr[i] == value) 
			count++;

	}

	return count;
}


int main()

{
	int arr[] = {3, 4, 5, 3, 5, 2, 3, 4, 5, 2, 1, 4, 2, 4, 3, 3, 3, 3, 5, 4, 4, 3, 5, 3, 2, 1, 3, 3, 2, 2, 3, 5, 5, 5, 2, 4, 5, 5, 5, 4, 3, 4};

	int length = sizeof(arr) / sizeof(arr[0]);

	cout << count(arr, 1, length) << " " << count(arr, 2, length) << " " << count(arr, 3, length) << endl;

	return 0;

}
