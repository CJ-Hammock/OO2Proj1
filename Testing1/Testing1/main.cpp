#include <string>
#include <iostream>
#include "ChangeNum.h"

//change 1

//made this change in a branch

//this should be in the final merge

using namespace std;

void Increment(int &n);
void Print(string s);



int main()
{
	cout << "heyo globe" << endl;

	int dummy = 0 ;

	Print(to_string(dummy));

	Increment(dummy);

	Print(to_string(dummy));

	dummy = DoubleNum(dummy);

	Print(to_string(dummy));

	dummy = DoubleNum(dummy);

	Print(to_string(dummy));

}

void Increment(int &n)
{
	n++;
}

void Print(string s)
{
	cout << s << endl;
}

