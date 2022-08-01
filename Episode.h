// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include "Video.h"
using namespace std;

class Episode:public Video{

  public:
    Episode();
    Episode(string, string, string, int, int);
    ~Episode();

  // Methods:
  void showRating();
};

