#include <iostream>
#include <cstring>

using namespace std;

class Movie {

public:

  // fields other than title and year: director, duration, rating

  char* director;
  int duration;
  char* rating;

  char* getDirector();
  int getDuration();
  char* getRating();
  

  
}
