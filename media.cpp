#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "videogame.h"
#include "music.h"
#include "movie.h"

using namespace std;

char* Media::getTitle(vector<Media*>::iterator it){
  return title;
}

int Media::getYear(){
  return year;
}




// create parent class
