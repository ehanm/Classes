// Welcome to Classes! This is a program that can allow the user to enter different types of media, search and print them out, and delete them.
// By: Ehan Masud
// Completed 12/5/2021

// Major credits to Nikhil, Nihal, and Kushal to giving me ideas when stuck


#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include "videogame.h"
#include "media.h"
#include "music.h"
#include "movie.h"

using namespace std;

void addcontent(vector<Media*> &v) { // add function
  char input[80];
  int x; // for id: 0 = videogame, 1 = song, 2 = movie
  bool stilladding = true;
  while (stilladding == true) {
    cout << "Are you adding a video game (VG), song (S), or a movie (MV)?" << endl;
    cin >> input;

    if (strcmp(input, "VG") == 0) { // add videogame

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
    else if (strcmp(input, "S") == 0) { // add song

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
    else if (strcmp(input, "MV") == 0) { // add movie

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

void search(vector<Media*> &m) { // function to search for content

  char input[100];
  char input3[1000];
  int input2;
  vector<Media*>::iterator it;

  cout << "Do you want to search by title(T) or year(Y)?" << endl;

  cin >> input;


  if (strcmp(input, "T") == 0){
    cout << "Insert the title of the media" << endl;
    cin >> input3;

    cout << "Searching..." << endl;
    cout << " " << endl;
    cout << " " << endl;
    

    for (it = (m).begin(); it < (m).end(); it++) {
      if (strcmp((*it)->title, input3) == 0){

	if ((*it)->getID() == 0) {

	cout << "Videogame: ";

	  (*it)->printVideoGame();
	  
	  }
	if ((*it)->getID() == 1) {

	  cout << "Song: ";
	  
	  (*it)->printMusic();

	}
	if ((*it)->getID() == 2) {
	  
	  cout << "Movie: ";
	  
	  (*it)->printMovie();
	  
	}
	
      }
      
     
    }
    
  }
  if (strcmp(input, "Y") == 0){
    cout << "Insert the year of the media" << endl;

    cin >> input2;

    cout << "Searching..." << endl;
    cout << " " << endl;
    cout << " " << endl;
    
    for (it = m.begin(); it < m.end(); it++) {
      if ((*it)->year == input2){

	if ((*it)->getID() == 0) {

	  cout << "Videogame: ";
	  (*it)->printVideoGame();
	  
	}
	if ((*it)->getID() == 1) {

	  cout << "Song: ";
	  (*it)->printMusic();
	  
	}
	if ((*it)->getID() == 2) {

	  cout << "Movie: ";
	  (*it)->printMovie();
	  
	}

	
        
      }
    }
  
  }
}

void deletecontent(vector<Media*> &m) { // deleting stuff

  char input[10];
  char input2[1000];
  char input3[10];
  int input4;

  vector<Media*>::iterator it;
  
  Media* pointer;
  
  cout << "Do you want to delete by title(T) or year(Y)?" << endl;

  cin >> input;

  if (strcmp(input, "T") == 0){

    cout << "Enter the title of the media you would like to delete." << endl;
    cin >> input2;

    for (int i = 0; i < m.size(); i++){ // goes through the vector (not with a vector iterator)
      if (strcmp(m[i]->title, input2) == 0){  // if the title is the same as the input

	m[i]->printVideoGame();
	m[i]->printMusic();
	m[i]->printMovie(); // shows the user what they are deleting
	
        cout << "Are you sure you want to delete this media? (Y/N)" << endl;
	cin >> input3;

	if (strcmp(input3, "Y") == 0) {
	  delete m[i];
	  m.erase(m.begin() + i);
	 
	}
	
      }
    }
    
  }
  if (strcmp(input, "Y") == 0){

    cout << "Enter the year of the media you would like to delete." << endl;
    cin >> input4;

    for (int i = 0; i < m.size(); i++){
      if (m[i]->year == input4){

        m[i]->printVideoGame();
        m[i]->printMusic();
        m[i]->printMovie();// same as above but with year

        cout << "Are you sure you want to delete this media? (Y/N)" << endl;
        cin >> input3;

        if (strcmp(input3, "Y") == 0){
          delete m[i];
	  m.erase(m.begin() + i);

        }

      }
    }
    

  }
  

  

  
}

int main() {

  vector<Media*> m;

  bool cont = true;
  char maininput[80];
  
  cout << "Welcome to Classes!" << endl;

  while (cont == true) { // the loop that keeps everything going
    cout << "Would you like to ADD, SEARCH, DELETE, or QUIT?" << endl;

    cin >> maininput;

    if (strcmp(maininput, "ADD") == 0) { // type add to add
      addcontent(m);
    }
    else if (strcmp(maininput, "SEARCH") == 0) { // type search to search
      search(m);
    }
    else if (strcmp(maininput, "DELETE") == 0) { // type delete to delete (wow!)
      deletecontent(m);
    }
    else if (strcmp(maininput, "QUIT") == 0) { // quit
      cont = false;
      break;
    }
    else {
      cout << "Invalid input!" << endl;
    }
				      
    
  }


  return 0;
}
