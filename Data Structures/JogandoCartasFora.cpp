#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <sstream>

using namespace std;

stack<int> build_stack(int size)
{
	stack<int> new_stack;

	for (int i = size; i > 0; i--)
		new_stack.push(i);

	return new_stack;
}

void insert_bottom(stack<int> & old_stack)
{
	int top = old_stack.top();
	old_stack.pop();

	stack<int> aux;

	while (!old_stack.empty())
	{
		aux.push(old_stack.top());
		old_stack.pop();
	}

	old_stack.push(top);

	while (!aux.empty())
	{
		old_stack.push(aux.top());
		aux.pop();
	}

}

string join(vector<int> vet)
{
	stringstream result;

	for (size_t i = 0; i < vet.size(); i++) {
		if (i != 0)
			result << ", ";
		result << vet[i];
	}

	return result.str();
}

int main()
{

	string entry;
	bool first = true;

	while (getline(cin, entry))
	{
		stack<int> stack = build_stack(stoi(entry));

		vector<int> discarted;

		while (stack.size() > 1)
		{
			//discard top card
			discarted.push_back(stack.top());
			stack.pop();

			//insert at the bottom of the stack
			insert_bottom(stack);
		}

		string result = join(discarted);


		if (entry != "0")
		{
			if (first)
			{
				if (result == "")
					cout << "Discarded cards:" << endl;
				else
					cout << "Discarded cards: " + result << endl;
			}
			else
				cout << endl << "Discarded cards: " + result << endl;

			cout << "Remaining card: " + to_string(stack.top());

			first = false;
		}
		else {
			cout << endl;
		}

	}

}

