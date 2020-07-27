#include <algorithm>
#include <iostream>

#include "Core.h"
#include "Pic.h"
#include "Student_info.h"

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;

Picture histogram(const vector<Student_info> &students)
{
	Picture names;
	Picture grades;

	for (vector<Student_info>::const_iterator it = students.begin();
		 it != students.end(); ++it)
	{

		names = vcat(names, vector<string>(1, it->name()));
		grades = vcat(grades,
#ifdef __BORLANDC__
					  vector<string>(1, " " + string(static_cast<size_t>(it->grade() / 5), '=')));
#else
					  vector<string>(1, " " + string(it->grade() / 5, '=')));
#endif
	}

	return hcat(names, grades);
}

int main()
{
	vector<Student_info> students;
	Student_info s;

	while (s.read(cin))
		students.push_back(s);

	sort(students.begin(), students.end(), Student_info::compare);

	cout << frame(histogram(students)) << endl;
	return 0;
}
