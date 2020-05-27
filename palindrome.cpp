#include <iostream>
#include <string>

using namespace std;


bool is_palindrome(string str){
	for(int i=0; i< str.length(); i++){
		if(str[i] != str[str.length()-1-i]){
			return false;
		}
	}
	return true;
}


int main()

{
	string xx = "cbbeaeacccdceedbdecdabbaddabbadcedbdeecdcccaeaebbc";

    string yy = "dabdcdbebddedcdcbbcecbbcdcdeddbebdcdbad";

    string zz = "ddbcbeebdbcdddeabbeccaeababaecceababaeaccebbaedddabdbeebcbdd";

    cout << boolalpha; 

    cout << is_palindrome(xx) << " " << is_palindrome(yy) << " " << is_palindrome(zz) << endl;

    return 0;
}