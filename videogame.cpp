#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "videogame.h"

using namespace std; //actual code behind getting variables and printing

char* VideoGame::getPublisher(){
  return publisher;
}

char* VideoGame::getRating(){
  return rating;
}

void VideoGame::printVideoGame(){
  cout << "Title: " << getTitle() << " " << "Year: "<<  getYear() << " " << "Publisher: " << getPublisher() << " " << "Rating: " << getRating() << endl;
}

VideoGame::~VideoGame(){
}
