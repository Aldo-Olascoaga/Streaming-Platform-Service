// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Episode.h"
using namespace std;

// Default constructor
Episode::Episode(){
  
}

// Constructor with parameters
Episode::Episode(string id, string name, string genre, int length, int rating):Video::Video(id, name, genre, length, rating){
  
}

// Destructor
Episode::~Episode(){};


// Methods:
void Episode::showRating(){
  cout << "This episode rating is " << getRating() << " out of 5!";
}

