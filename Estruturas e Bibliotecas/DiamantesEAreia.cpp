#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

int main()
{
    string entry;
    int nc;
    scanf("%d ", &nc);

    while (nc--)
    {

        getline(cin, entry);
        bool valid = false;
        vector<char> left;
        int num = 0;

        for (int i = 0; i < entry.size(); i++)
        {

            if (entry[i] == '>')
            {
                if (left.empty())
                {
                    valid = false;
                }
                else
                {
                    left.pop_back();
                    num++;
                    valid = true;
                }
            }
            else if (entry[i] == '<')
            {
                left.push_back(entry[i]);
            }
        }

        left.clear();
        cout << num << endl;
    }
}