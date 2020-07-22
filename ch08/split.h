#include <algorithm>
#include <cctype>
#include <string>

using std::find_if;
using std::string;

#ifndef _MSC_VER
using std::isspace;
#endif

inline bool space(char c)
{
	return isspace(c);
}

inline bool not_space(char c)
{
	return !isspace(c);
}

template <class Out>
void split(const string &str, Out os)
{
	typedef string::const_iterator iter;
	iter i = str.begin();
	while (i != str.end())
	{
		i = find_if(i, str.end(), not_space);
		iter j = find_if(i, str.end(), space);
		if (i != str.end())
			*os++ = string(i, j);
		i = j;
	}
}
