#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include "videogame.h"
#include "media.h"
#include "music.h"
#include "movie.h"


using namespace std;

void addcontent(vector<Media>* v) {
  char input[80];
  bool stilladding = true;
  while (stilladding == true) {
    cout << "Are you adding a video game (VG), song (S), or a movie (MV)?" << endl;
    cin >> input;

    Media media = v[0];
    Media* mediapointer = &media;

    Movie* movie = dynamic_cast<Movie*>(mediapointer);
    VideoGame* videogame = dynamic_cast<VideoGame*>(mediapointer);
    Music* song = dynamic_cast<Music*>(mediapointer);
    
    if (strcmp(input, "VG") == 0) {
      
      cout << "Enter the title of the game: " << endl;
      cin >> VideoGame->title;
      cout << "Enter the year the game was made: " << endl;
      cout << "Enter the publisher for the game: " << endl;
      cout << "Enter the ESRB (rating) of the game: " << endl;
      // add to parent vector
      stilladding = false;
    }
    if (strcmp(input, "S") == 0) {
      cout << "Enter the title of the song: " << endl;
      cout << "Enter the song's artist: " << endl;
      cout << "Enter the year of the song's release: " << endl;
      cout << "Enter the duration of the song: " << endl;
      cout << "Enter the publisher of the song: " << endl;
      stilladding = false;
    }
    if (strcmp(input, "MV") == 0) {
      cout << "Enter the title of the movie: " << endl;
      cout << "Enter the director of the movie: " << endl;
      cout << "Enter the year the movie was released: " << endl;
      cout << "Enter the duration of the movie: " << endl;
      cout << "Enter the rating of the movie: " << endl;
      stilladding = false;
    }
    else {
      cout << "Invalid input!" << endl;
      stilladding = true;
    }
				
  }

  
}

void search() {

}

void deletecontent() {

}

int main() {

  vector<Media> m;

  bool cont = true;
  char input[80];
  
  cout << "Welcome to Classes!" << endl;

  while (cont == true) {
    cout << "Would you like to ADD, SEARCH, DELETE, or QUIT?" << endl;

    cin >> input;

    if (strcmp(input, "ADD") == 0) {
      addcontent(&m);
    }
    if (strcmp(input, "SEARCH") == 0) {
      // develop search function in main
    }
    if (strcmp(input, "DELETE") == 0) {
      // develop delete function in main
    }
    if (strcmp(input, "QUIT") == 0) {
      cont = false;
      break;
    }
    else {
      cout << "Invalid input!" << endl;
    }
				      
    
  }


  return 0;
}
