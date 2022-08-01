// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Video.h"
using namespace std;


class Movie:public Video{
  private:
    string cast;

  public:
    Movie();
    Movie(string, string, string, int, int, string, Date);
    ~Movie();


  // Getters:
  string getCast();
  
  // Setters:
  void setCast(string);

  // Other methods:
  void showCast();
  void showRating();

};