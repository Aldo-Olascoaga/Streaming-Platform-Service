// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Video.h"
using namespace std;

class Series:public Video{
  private:
    int seasons, numEpisodes;
    string castSeries;

  public:
    Series();
    Series(string, string, string, int, int, int, int, string, Date);
    ~Series();

  // Getters:
  int getSeasons();
  int getNumEpisodes();
  string getCastSeries();

  // Setters:
  void setSeasons(int);
  void setNumEpisodes(int);
  void setCastSeries(string);

  // Other methods:
  void showRating();
  void showDetails();

};