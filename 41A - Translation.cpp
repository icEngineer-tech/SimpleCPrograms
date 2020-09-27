#include <iostream>
#include <string>

bool pal(std::string s, std::string s1)
{
	bool b = false;
	for (auto i = 0; i < s.size(); i++)
	{
		if (s[i] == s1[s1.size() -1 - i])
			b = true;
		else
		{
			b = false;
			break;
		}
	}
	return b;
}
int main()
{
	std::string s, s1;
	std::cin >> s;
	std::cin >> s1;
	if (pal(s,s1))
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}
