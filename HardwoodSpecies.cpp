#include <iostream>
#include <string>
#include <map>
#include <stdio.h>


using namespace std;

int main()
{
	int numOfEntries;
	string entry;

	scanf("%d", &numOfEntries);
	cin.ignore();
    getline(cin, entry);
    
	while (numOfEntries--)
	{
		map<string, int> arvores;

		int numItems = 0;
		while (getline(cin, entry) && !entry.empty())
		{
			numItems++;
			if (arvores.count(entry))
			{
				arvores[entry] = arvores[entry] + 1;
			}
			else
			{
				arvores.insert(pair<string, int>(entry, 1));
			}
		}

		for (auto const& arvore : arvores)
		{
			float res = ((float)arvore.second / numItems) * 100;
			printf("%s %.*f\n", arvore.first.c_str(), 4, res);
		}
		
        if (numOfEntries != 0) cout << endl;
	}
}
