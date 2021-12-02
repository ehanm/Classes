#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include "videogame.h"
#include "media.h"
#include "music.h"
#include "movie.h"

using namespace std;

void addcontent(vector<Media*> &v) {
  char input[80];
  int x; // 0 = videogame, 1 = song, 2 = movie
  bool stilladding = true;
  while (stilladding == true) {
    cout << "Are you adding a video game (VG), song (S), or a movie (MV)?" << endl;
    cin >> input;

    if (strcmp(input, "VG") == 0) {

      VideoGame* vg = new VideoGame();

      x = 0;

      vg->id = x;

      cout << "Enter the title of the game: " << endl;
      cin >> vg->title;
      cout << "Enter the year the game was made: " << endl;
      cin >> vg->year;
      cout << "Enter the publisher for the game: " << endl;
      cin >> vg->publisher;
      cout << "Enter the ESRB (rating) of the game: " << endl;
      cin >> vg->rating;
      (v).push_back(vg);// add to parent vector
      stilladding = false;
    }
    else if (strcmp(input, "S") == 0) {
      cout << "Enter the title of the song: " << endl;
      cout << "Enter the song's artist: " << endl;
      cout << "Enter the year of the song's release: " << endl;
      cout << "Enter the duration of the song in minutes: " << endl;
      cout << "Enter the publisher of the song: " << endl;
      stilladding = false;
    }
    else if (strcmp(input, "MV") == 0) {
      cout << "Enter the title of the movie: " << endl;
      cout << "Enter the director of the movie: " << endl;
      cout << "Enter the year the movie was released: " << endl;
      cout << "Enter the duration of the movie in minutes: " << endl;
      cout << "Enter the rating of the movie: " << endl;
      stilladding = false;
    }
    else {
      cout << "Invalid input!" << endl;
      stilladding = true;
    }
				
  }

  
}

void search(vector<Media*> &m) {

  char input[100];
  char input3[1000];
  int input2;
  int compare;
  vector<Media*>::iterator it;
  
  cout << "Do you want to search by title(T) or year(Y)?" << endl;

  cin >> input;


  if (strcmp(input, "T") == 0){
    cout << "Insert the title of the media" << endl;
    cin >> input3;

    for (it = (m).begin(); it < (m).end(); it++) {
      if (strcmp((*it)->title, input3) == 0){

	if ((*it)->id == getID()) {
	  cout << "videogame";
	}
	if ((*it)->id == getID()) {
	  cout << "song";
	}
	if ((*it)->id == getID()) {
	  cout << "movie";
	}

	cout << "it works!!!" << endl;
	
      }
      
     
    }
    
  }
  if (strcmp(input, "Y") == 0){
    cout << "Insert the year of the media" << endl;

    cin >> input2;

    for (it = m.begin(); it < m.end(); it++) {
      compare = (*it)->year;
      if (compare == input2){

	cout << (*it)->getTitle() << " ";
      }
    }
  
  }
}

void deletecontent() {

}

int main() {

  vector<Media*> m;

  bool cont = true;
  char maininput[80];
  
  cout << "Welcome to Classes!" << endl;

  while (cont == true) {
    cout << "Would you like to ADD, SEARCH, DELETE, or QUIT?" << endl;

    cin >> maininput;

    if (strcmp(maininput, "ADD") == 0) {
      addcontent(m);
    }
    else if (strcmp(maininput, "SEARCH") == 0) {
      search(m);
    }
    else if (strcmp(maininput, "DELETE") == 0) {
      // develop delete function in main
    }
    else if (strcmp(maininput, "QUIT") == 0) {
      cont = false;
      break;
    }
    else {
      cout << "Invalid input!" << endl;
    }
				      
    
  }


  return 0;
}
