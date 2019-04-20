#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string entry;

	while (getline(cin, entry))
	{
		int openned = 0;
		bool correct = true;

		for (int i = 0; i < entry.size(); i++)
		{
			if (entry[i] == ')') {

				if (!openned) {
					correct = false;
					break;
				}
				else {
					openned--;
				}
			}
			else if (entry[i] == '(') {
				openned++;
			}

		}

		if (openned != 0) correct = false;

		cout << (correct ? "correct" : "incorrect") << endl;
	}
}



