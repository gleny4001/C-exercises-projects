#include "ExceptionHandler.h"

using namespace std;

int ExceptionHandler::validateSelection(const string& input) const
{
	if (input.length() > 1)
		return 0;
	else
	{
		int id = input[0] - 48;
		if (id >= 1 && id <= 6)
			return id;
		else
			return 0;
	}
}

bool ExceptionHandler::lastNameValid(string& input) const
{
	for (auto it = input.begin(); it != input.end(); ++it) 
		if (isspace(*it)) 
			return false;

	input[0] = toupper(input[0]);
	for_each(input.begin() + 1, input.end(),
			[](char& c) { c = ::tolower(c); });
		return true;
}

bool ExceptionHandler::validateID
	(const string& input, int& id) const
{
	// your code here...
	int len = static_cast<int>(input.length());
	if (len != 6)
	{
		cout << "Invalid output. ID is 6 digits. Try again." << endl;
		return false;
	}
	for (auto c : input)
	{
		if (!isdigit(c))
		{
			cout << "Invalid output. ID is 6 digits. Try again." << endl;
			return false;
		}
	}
	id = stoi(input);

	return true;
}

bool ExceptionHandler::validateCoursePrefix(string& input) const
{
	if (input.length() != 3)
	{
		cout << "Invalid input. Course prefix is 3 letters. "
			<< "Try again." << endl;
		input = "";
		return false;
	}
	else
	{
		// your code here...
		for_each(input.begin(), input.end(), [](char c) {c = toupper(c);});
	}
	return true;
}

bool ExceptionHandler::validateCourseNo
	(const string& input, int& courseNo) const
{
	if (input.length() != 3)
	{
		cout << "Invalid input. Course number is 3 digits. "
			<< "Try again." << endl;
		return false;
	}
	else
	{
		courseNo = stoi(input);
		return true;
	}
}


