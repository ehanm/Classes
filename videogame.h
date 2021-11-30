#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class VideoGame : Media {

public:

  // fields other than title and year: publisher and rating

  char* publisher;
  char* rating;

  char* getPublisher();
  char* getRating();

  
};
