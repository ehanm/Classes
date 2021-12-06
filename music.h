#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Music : public Media{ // music child class with definitions and function prototypes

public:

  // fields in music other than title and year: artist, duration, publisher

  char artist[1000];
  int duration;
  char publisher[1000];

  char* getArtist();
  int getDuration();
  char* getPublisher();

  void printMusic();

  ~Music();
  
};
