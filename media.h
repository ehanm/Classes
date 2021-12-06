#include <iostream>
#include <cstring>
#include <vector>
#ifndef MEDIAFILE // to combat redefinition errors
#define MEDIAFILE

using namespace std;

class Media { // parent class

public:

  // common fields in all media: title and year
  
  char title[1000];
  int year;
  int id;

  char* getTitle();
  int getYear();
  int getID();

  virtual void printVideoGame(); // so print function looks fancy, but could have just use one singular print function if I wanted
  virtual void printMusic();
  virtual void printMovie();

  virtual ~Media(); //destructor
};

#endif

