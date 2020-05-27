#include <iostream>
#include <map>
#include <iterator>

using namespace std;


map<int, int> counts(int arr[], int length)
{
	map<int, int> m;

	for(int i=0; i<length; i++){
		m[arr[i]] += 1;
	}
	return m;
}


int main()

{
	int arr[] = {4, 1, 3, 1, 2, 1, 3, 2, 4, 4, 3, 1, 2, 3, 1, 1, 1, 1, 4, 2, 5, 3, 4, 2, 3, 1, 2, 5, 5, 2, 3, 1, 3, 5, 2, 2, 5, 3, 3, 2, 3, 1};

    int length = sizeof(arr) / sizeof(arr[0]);

 

    map <int, int> answer = counts(arr, length);

    map <int, int> :: iterator i;

    for (i = answer.begin(); i != answer.end(); i++) {

        cout << i->first << " - " << i->second << ", ";

    }
    return 0;
}