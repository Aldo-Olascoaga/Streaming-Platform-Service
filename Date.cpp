// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

// Default constructor
Date::Date(){
  
}

// Constructor with parameters
Date::Date(int month, int day, int year){
  this -> month = month;
  this -> day = day;
  this -> year = year;
}

// Destructor
Date::~Date(){};


// Overloading the operator <<
ostream& operator << (ostream& output, const Date& releaseDate){
  output << releaseDate.month << "/" << releaseDate.day << "/" << releaseDate.year;
  return output;
}

