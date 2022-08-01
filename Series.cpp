// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Series.h"
using namespace std;

// Default constructor
Series::Series(){
  
}

// Constructor with parameters
Series::Series(string id, string name, string genre, int length, int rating, int seasons, int numEpisodes, string castSeries, Date):Video::Video(id, name, genre, length, rating){
  this -> seasons = seasons;
  this -> numEpisodes = numEpisodes;
  this -> castSeries = castSeries;  

}

// Destructor
Series::~Series(){};


// Getters:
int Series::getSeasons(){
  return seasons;
}

int Series::getNumEpisodes(){
  return numEpisodes;
}

string Series::getCastSeries(){
  return castSeries;
}


// Setters:
void Series::setSeasons(int seasons){
  this -> seasons = seasons;
}

void Series::setNumEpisodes(int numEpisodes){
  this -> numEpisodes = numEpisodes;
}

void Series::setCastSeries(string castSeries){
  this -> castSeries = castSeries;
}


// Other methods:
void Series::showRating(){
  cout << "\nThis series rating is " << getRating() << " out of 5! According to the critics.";
}

void Series::showDetails(){
  cout << "Series ID: " << getID() << endl;
  cout << "Series name: " << getName() << endl;
  cout << "Series genre: " << getGenre() << endl;
  cout << "Running time per episode on average (minutes): " << getLength() << endl;
  cout << "Rating: " << getRating() << endl;
  cout << "Number of seasons: " << getSeasons() << endl;
  cout << "Total number of episodes: " << getNumEpisodes() << endl;
  cout << "Series cast: " << getCastSeries() << endl;
}

