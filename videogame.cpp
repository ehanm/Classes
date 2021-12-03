#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "videogame.h"

using namespace std;

char* VideoGame::getPublisher(){
  return publisher;
}

char* VideoGame::getRating(){
  return rating;
}

void VideoGame::printVideoGame(){
  cout << "Title: " << getTitle() << " " << "Year: "<<  getYear() << " " << "Publisher: " << getPublisher() << " " << "Rating: " << getRating() << endl;
}
