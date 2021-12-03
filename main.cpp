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

      Music* s = new Music();

      x = 1;
      s->id = x;
      
      cout << "Enter the title of the song: " << endl;
      cin >> s->title;
      cout << "Enter the song's artist: " << endl;
      cin >> s->artist;
      cout << "Enter the year of the song's release: " << endl;
      cin >> s->year;
      cout << "Enter the duration of the song in minutes: " << endl;
      cin >> s->duration;
      cout << "Enter the publisher of the song: " << endl;
      cin >> s->publisher;
      (v).push_back(s);
      stilladding = false;
    }
    else if (strcmp(input, "MV") == 0) {

      Movie* mv = new Movie();

      x = 2;
      mv->id = x;
      
      cout << "Enter the title of the movie: " << endl;
      cin >> mv->title;
      cout << "Enter the director of the movie: " << endl;
      cin >> mv->director;
      cout << "Enter the year the movie was released: " << endl;
      cin >> mv->year;
      cout << "Enter the duration of the movie in minutes: " << endl;
      cin >> mv->duration;
      cout << "Enter the rating of the movie: " << endl;
      cin >> mv->rating;
      (v).push_back(mv);
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

	if ((*it)->getID() == 0) {

	  (*it)->printVideoGame();
	  
	}
	if ((*it)->getID() == 1) {

	  (*it)->printMusic();

	}
	if ((*it)->getID() == 2) {

	  (*it)->printMovie();
	  
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
