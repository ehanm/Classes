#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "videogame.h"
#include "music.h"
#include "movie.h"

using namespace std;

char* Media::getTitle(){
  return title;
}

int Media::getYear(){
  return year;
}

int Media::getID(){
  return id;
}

void Media::printVideoGame(){
}
void Media::printMusic(){
}
void Media::printMovie(){
}


// create parent class
