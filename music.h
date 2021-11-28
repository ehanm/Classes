#include <iostream>
#include <cstring>

using namespace std;

class Music {

public:

  // fields in music other than title and year: artist, duration, publisher

  char* artist;
  int duration;
  char* publisher;

  char* getArtist();
  int getDuration();
  char* getPublisher();
  


}
