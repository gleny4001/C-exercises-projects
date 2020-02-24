/*
	Yang, Glen

	Nguyen, Josh

	McGinty, Ryan

	Bostouros, Abonb

	September 11, 2019

	CS A250
	Movie class - lab2
*/


#include "movie.h"

using namespace std;

movie::movie()
{
	year = 0;
	
}

movie::movie(const string& theTitle, int theYear)
{
	title = theTitle;
	year = theYear;
}

std::string movie::getMovieTitle() const
{
	return title;
}

int movie::getYear() const
{
	return year;
}

void movie::setMovieTitle(const std::string& newTitle)
{
	title = newTitle;
}

void movie::setYear(int newYear)
{
	year = newYear;
}

void movie::print() const
{
	if (year == 0 || title == "")
	{
		cerr << "There is no movie";
	}
	else
	{
		cout << title << "(" << year << ")" << endl;
	}
}

bool movie::sameYear(const movie& s2) const
{
	bool result = false;
	if (year == s2.year)
	{
		return true;
	}
	return result;

}
movie::~movie()
{

}