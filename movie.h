#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Movie : Media{

public:

  // fields other than title and year: director, duration, rating

  char* director;
  int duration;
  char* rating;

  char* getDirector();
  int getDuration();
  char* getRating();
  
};
