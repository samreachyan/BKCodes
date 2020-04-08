#include <bits/stdc++.h>
using namespace std;


int main()
{
	int total[26] = { 0 };

	ifstream infile("chipher.txt");
	if (!infile)
	{
		cout << "Error opening cipher file" << endl;
		return 0;
	}

	char c;
	while (infile.get(c))         // read characters one at a time
	{
		if (isalpha(c))           // check it is a-z or A-Z
		{
			
			int index = c - 'A';  // index in range 0 to 25;

			total[index]++;       // increment corresponding total
		}
	}

	for (int i = 0; i<26; i++)      // Print the results
	{
		cout << "  " << char(i + 'A') << " occurs "
			<< setw(5) << total[i] << " times" << endl;
	}

	system("pause");
	return 0;
}
