#include <iostream>
#include <cstring>


using namespace std;

int main() {

  bool cont = true;
  char input[80];
  
  cout << "Welcome to Classes!" << endl;

  while (cont == true) {
    cout << "Would you like to ADD, SEARCH, DELETE, or QUIT?" << endl;

    cin >> input;

    if (strcmp(input, "ADD") == 0) {
      // develop add function in main
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
				      
    
  }


  return 0;
}
