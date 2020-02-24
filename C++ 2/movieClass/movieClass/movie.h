/*
	Yang, Glen

	Nguyen, Josh

	McGinty, Ryan

	Bostouros, Abonb

	September 11, 2019

	CS A250
	Movie class - lab2
*/
#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class movie
{
public:
	movie();

	movie(const std::string&, int);

	std::string getMovieTitle() const;

	int getYear() const;

	void setMovieTitle(const std::string&);

	void setYear(int);

	void print() const;

	bool sameYear(const movie&);
	

	~movie();
private:
	std::string title;
	int year = 0;

};



#endif 
