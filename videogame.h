#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"

using namespace std;

class VideoGame : public Media { // videogame class definitions

public:

  // fields other than title and year: publisher and rating

  char publisher[1000];
  char rating[10];

  char* getPublisher();
  char* getRating();
  void printVideoGame();

  ~VideoGame();
  
};
