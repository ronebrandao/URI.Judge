#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int numOfWords, numOfJobDescriptions;
	string entry;

	cin >> numOfWords; cin >> numOfJobDescriptions; 
	cin.ignore();

	map<string, int> salaries;
	
	string dictionary; int money;
	while (numOfWords--)
	{
		cin >> dictionary; cin >> money;
		salaries.insert(pair<string, int>(dictionary, money));
	}

	int salary;
	while (numOfJobDescriptions--)
	{
		salary = 0;

		while (entry != ".")
		{
			cin >> entry;

			if (salaries.count(entry))
				salary += salaries[entry];

		}
        
		printf("%d\n", salary);
        entry = "";
	}

}
