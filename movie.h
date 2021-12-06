#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Movie : public Media{ // the child class for movies

public:

  // fields other than title and year: director, duration, rating

  char director[1000];
  int duration;
  char rating[1000];

  char* getDirector();
  int getDuration();
  char* getRating();

  void printMovie();
  

  ~Movie();
  
};
