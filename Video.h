// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

// Abstract class:

class Video{
  private:
    string id, name, genre;
    int length, rating;

  public:
    Video();
    Video(string, string, string, int, int);
    ~Video();

  // Getters:
  string getID();
  string getName();
  string getGenre();
  int getLength();
  int getRating();


  // Setters:
  void setID(string);
  void setName(string);
  void setGenre(string);
  void setLength(int);
  void setRating(int);

  // Other methods:
  void showDetails();

  // Pure virtual function:
  virtual void showRating() = 0;

};