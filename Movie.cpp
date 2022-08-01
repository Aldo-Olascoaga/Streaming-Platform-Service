// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Movie.h"
using namespace std;

// Default constructor
Movie::Movie(){
}

// Constructor with parameters
Movie::Movie(string id, string name, string genre, int length, int rating, string cast, Date):Video::Video(id, name, genre, length, rating){
  this -> cast = cast;
}

// Destructor
Movie::~Movie(){};


// Getters:
string Movie::getCast(){
  return cast;
}


// Setters:
void Movie::setCast(string cast){
  this -> cast = cast;
}


// Other methods:}
void Movie::showCast(){
  cout << "\nCast: " << getCast();
}

void Movie::showRating(){
  cout << "\nThis movie rating is " << getRating() << " out of 5! According to the critics.";
}

