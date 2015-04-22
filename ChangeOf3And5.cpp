#include <iostream>
using namespace std;

/*
You are given infinite count 0f Rs 3 and Rs 5 coins. Write an algorithm that determines if given number is a change of 5 and 3.
1. Example : 13 = 5*2 + 3 Yes
2. Example : 7 = No
3. Example : 20 = Yes
*/

bool isChangeOf3And5(int no)
{
	if (no <= 0) return false;
	if (no % 5 == 0 || no % 3 == 0) return true;

	int diff5 = no - 5;
	if (diff5 %3 == 0) 
		return true;
	else {
		int diff3 = no - 3;
		if (diff3 % 5 == 0)
			return true;
	}	
	return false;
}

int main() {
	int number = 14;
	cout<<isChangeOf3And5(number)<<endl;
	return 0;
}