#include <iostream>
#include <cstring>
#ifndef MEDIAFILE
#define MEDIAFILE

using namespace std;

class Media {

public:

  // common fields in all media: title and year
  
  char* title;
  int year;

  char* getTitle();
  int getYear();
  
};

#endif

