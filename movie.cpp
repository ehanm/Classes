#include <iostream>
#include <cstring>
#include "media.h"
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
  cout << "Title: " << getTitle() << " " << "Year: " << getYear() << " " << "Director: " << getDirector() << " " << "Duration: " << getDuration() << " " << "Rating: " << getRating() << endl;
}
