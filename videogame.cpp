#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "videogame.h"
#include "music.h"
#include "movie.h"

using namespace std;

char* VideoGame::getPublisher(){
  return publisher;
}

char* VideoGame::getRating(){
  return rating;
}
