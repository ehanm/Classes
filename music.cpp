#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

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
  cout << "Title: " << getTitle() << " " << "Year: " << getYear() << " " << "Artist: " << getArtist() << " " << "Duration: " << getDuration() << " " << "Publisher: " << getPublisher() << endl;
}
