#include <iostream>
#include <cstring>
#include "videogame.h"
#include "media.h"
#include "music.h"
#include "movie.h"

using namespace std;

char* Music::getArtist(){
  return artist;
}
int Music::getDuration(){
  return duration;
}
char* Music::getPublisher(){
  return publisher;
}

void Music::printMusic(){
  cout << title << " " << year << " " << artist << " " << duration << " " << publisher << endl;
}
