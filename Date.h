// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date{
  private:
    int month, day, year;

  public:
    Date();
    Date(int, int, int);
    ~Date();


  // Overloading the operator <<
  friend ostream& operator << (ostream& output, const Date& releaseDate);

};