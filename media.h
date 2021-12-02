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

  char* getTitle(vector<Media*>::iterator it);
  int getYear();
  
};

#endif

