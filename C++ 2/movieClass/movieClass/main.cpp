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
#include <iostream>
#include <string>

using namespace std;

int main()
{
	movie myMovie;
	movie yourMovie("Jixsaw - C++", 2019);
	 

	cout << "My movie: " << myMovie.getMovieTitle() << endl;
	cout << "Your movie: " << yourMovie.getMovieTitle() << endl;

	cout << "My movie year :" << myMovie.getYear() << endl;
	cout << "Your movie year :" << yourMovie.getYear() << endl;

	(myMovie.sameYear(yourMovie)) ? cout << "same year" << endl : cout << "different year" << endl;

	myMovie.setMovieTitle("The serial Killer - C++ 2");
	myMovie.setYear(2019);

	myMovie.print();
	yourMovie.print();

	(myMovie.sameYear(yourMovie)) ? cout << "same year" << endl : cout << "different year" << endl;

	cout << endl;
	system("pause");
	return 0;
}
