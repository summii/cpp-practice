#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;

//it is not possible to change the size of a C++ array after it is declared. 
//Vectors provide us the flexibility of inserting and deleting elements even after they are declared. 

void display_vector(vector <int> v) {
	for (int i=0; i< v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

// Iterating over all key—value pairs
void display_map(map <string, int> m){
	map <string, int> :: iterator it;

	for(it=m.begin(); it !=m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;

		// will output same as above

		cout << it->first << " " << it->second << endl;
	}

	cout << endl;
}

int main()
{
	vector <int> age_test (100);

	vector <string> name;

	cout << age_test.size() << endl;

	cout << name.size() << endl;

	vector <int> lottery;

	lottery.push_back(3);

	lottery.push_back(42);

	lottery.push_back(5);

	lottery.push_back(18);

	lottery.push_back(20);

	// print first element
	cout << lottery[0] << endl;

	// print last element
	cout << lottery[4] << endl;

	// update element at 2
	lottery[2] = 9;

	// take input from user
	cin >> lottery[3];

	// removing end element
	lottery.pop_back();

	cout << lottery.size() << endl;

	// before sorting

	display_vector(lottery); // display the vector

	sort(lottery.begin(), lottery.end());

	// after sort
	display_vector(lottery);

	// reverse

	reverse(lottery.begin(), lottery.end());

    //we initialize it to lottery.begin(), which is the beginning position of your vector. 
    //Then, as we increment it with it++, which will update it to point towards next element of your vector. 
    //We keep traversing the vector till it has reached the end of the vector lottery.end()
	vector <int> :: iterator it;

	for(it = lottery.begin(); it != lottery.end(); it++) {
		cout << *it << " "; // use the * operator to access a value from an iterator.
	}
	cout << endl;

	// As the name pair suggests, it can hold two elements. Its usefulness comes from the fact that the data elements can be of two different types

	pair <string, int> p;

	p.first = "Roger federer";

	p.second = 38;

	cout << p.first << " " << p.second << endl;

	// Declaring a Pair with initialization

	pair <int, char> p2(1, 'a'); /// different data types

	pair <int, int> p3(1,10); // same data type

	pair <int, int> p4(p3); // copy of p3


    // A map is similar to a vector, but you access values by looking up a key instead of a numeric index
	//Declaring a map and accessing elements

	map <string, int> age;

	age["Bob"] = 37;

	age["Eve"] = 39;

	age["Sumeet"] = 30;

	age["Charlie"] = 42;

	cout << age["Bob"] << endl;

	cout << age["Sumeet"] << endl;

	cout << age.size() << endl;

	//display_map(age);

	//Invalid keys and default values

	// If a key is not present in the map and we access it, 
	// C++ creates the key with a default value. If the value of type int, the default value is 0

	cout << age["thisKeywasneverInserted"] << endl;

	//display_map(age);

	// find(key) function

	if (age.find("Funny") != age.end()){
		cout << "Found" << endl;
	}

	else {
		cout << "Not found" << endl;
	}

	//display_map(age);

	// Deleting elements

	age.erase("Bob");

	//display_map(age);



	return 0;
}