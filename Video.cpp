// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Video.h"
using namespace std;

// Default constructor
Video::Video(){
  
}

// Constructor with parameters
Video::Video(string id, string name, string genre, int length, int rating){
  this -> id = id;
  this -> name = name;
  this -> genre = genre;
  this -> length = length;
  this -> rating = rating;
}

// Destructor
Video::~Video(){}


// Getters:
string Video::getID(){
  return id;
}

string Video::getName(){
  return name;
}

string Video::getGenre(){
  return genre;
}

int Video::getLength(){
  return length;
}

int Video::getRating(){
  return rating;
}


// Setters:
void Video::setID(string id){
  this -> id = id;
}

void Video::setName(string name){
  this -> name = name;
}

void Video::setGenre(string genre){
  this -> genre = genre;
}

void Video::setLength(int length){
  this -> length = length;
}

void Video::setRating(int rating){
  this -> rating = rating;
}

void Video::showDetails(){
  cout << "Video ID: " << getID() << endl;
  cout << "Video name: " << getName() << endl;
  cout << "Video genre: " << getGenre() << endl;
  cout << "Video length (minutes): " << getLength() << endl;
  cout << "Video rating (from 1 to 5): " << getRating();
}

void Video::showRating(){
  cout << "\nThis video rating is " << getRating() << " out of 5! According to the critics.";
}