#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string entry;

	while (getline(cin, entry))
	{

		stack<int> stack = build_stack(stoi(entry));

		for (int i = 0; i < stoi(entry); i++) {
			cout << stack.top << endl;
			stack.pop();
		}

	}

}

stack<int> build_stack(int size)
{
	stack<int> new_stack;

	for (int i = size; i > 0; i--)
		new_stack.push(i);

	return new_stack;
}