#include<string>
#include<iostream>
using namespace std;
int main()
{
	string source;
	getline(cin, source);
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string target;
		getline(cin, target);
		int fpos = 0;
		bool findall = true;
		for (int j = 0; j < source.size(); j++)
		{
			fpos = target.find(source[j], fpos);
			
			if (fpos == string::npos)
			{
				findall = false;
				break;
			}
			else
				fpos++;
		}
		if (findall)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}