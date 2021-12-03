#include <iostream>
#include <cstring>
#include "media.h"
#include "videogame.h"
#include "music.h"
#include "movie.h"

using namespace std;

char* Movie::getDirector(){
  return director;
}
int Movie::getDuration(){
  return duration;
}

char* Movie::getRating(){
  return rating;
}

void Movie::printMovie(){
  cout << title << " " << year << " " << director << " " << duration << " " << rating << endl;
}
