#include <iostream>
#include <cstring>
#include <vector>
#ifndef MEDIAFILE
#define MEDIAFILE

using namespace std;

class Media {

public:

  // common fields in all media: title and year
  
  char title[1000];
  int year;
  int id;

  char* getTitle();
  int getYear();
  int getID();
  
};

#endif

