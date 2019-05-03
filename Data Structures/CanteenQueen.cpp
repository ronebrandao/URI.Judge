#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

	int numOfCases;

	cin >> numOfCases;

	while (numOfCases--)
	{
		string entry;
		int num;
		vector<int> grades;

		int i; cin >> i;
		cin.ignore();

		while (i--)
		{
			cin >> num;
			grades.push_back(num);
		}

		vector<int> copy = grades;

		sort(copy.begin(), copy.end(), greater<>());

		int count = 0;
		for (int i = 0; i < grades.size(); i++)
		{
			if (grades[i] == copy[i])
				count++;
		}

		cout << count << endl;

		grades.clear();
	}
}
