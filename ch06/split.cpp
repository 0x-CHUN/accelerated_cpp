#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

#include "split.h"

using std::find_if;
using std::string;
using std::vector;

using std::isspace;

bool space(char c)
{
	return isspace(c);
}

bool not_space(char c)
{
	return !isspace(c);
}

vector<string> split(const string &str)
{
	typedef string::const_iterator iter;
	vector<string> ret;

	iter i = str.begin();
	while (i != str.end())
	{

		i = find_if(i, str.end(), not_space);
		iter j = find_if(i, str.end(), space);
		if (i != str.end())
			ret.push_back(string(i, j));
		i = j;
	}
	return ret;
}
