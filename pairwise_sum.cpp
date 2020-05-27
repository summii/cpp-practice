#include <iostream>

using namespace std;

int sum_of_products(int xx[], int yy[], int length)
{
	int sum = 0;

	for(int i=0; i< length; i++){
		sum += xx[i] * yy[i];
	}
	return sum;
}

int main()
{
	int xx[] = {3, 1, 8, 9, 8, 0, 1, 5, 0, 4, 3, 4, 7, 1, 5, 4, 6, 6, 3, 9, 7, 9, 6, 2, 1 };

    int yy[] = {9, 6, 4, 2, 6, 7, 2, 9, 6, 6, 9, 1, 7, 4, 3, 3, 4, 7, 8, 7, 3, 7, 7, 7, 3 };

    int length = sizeof(xx) / sizeof(xx[0]);

    cout <<  sum_of_products(xx, yy, length) << endl;

    return 0;
}