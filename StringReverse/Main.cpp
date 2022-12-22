#include <iostream>
#include <stdlib.h>
#include <stack>

using namespace std;
string ReverseString(string);

int main()
{
	string text = "Hello String Reverse!";
	cout << text << endl;
	string reversed = ReverseString(text);
	cout << reversed << endl;
}

string ReverseString(string input)
{
	string output = "";
	stack<char> letters;
	for (int i = 0; i < input.length(); i++)
	{
		letters.push(input[i]);
	}
	while (!letters.empty())
	{
		output += letters.top();
		letters.pop();
	}

	return output;
}