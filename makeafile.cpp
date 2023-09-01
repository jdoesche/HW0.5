
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

char modeselect();

const int MX = 1000;


int main()
{
  //vocabulary
  char mode;
  int SENT;
  string flname;
  
  mode = modeselect();

  cout << "Please enter your desired file name (Ending with a .txt)" << endl;
  cin >> flname;

  cout << endl << endl;
  
  //the meat
  cout << flname << " has been selected" << endl;
  
  cout << "Task successful" << endl;
    
  return 0;
}

//Returns whether the function is in Automatic or Manual mode
char modeselect()
{
  char m;
  cout << "Welcome to Make-a-File! Do you want (A)utomatic or (M)anual mode? " << endl;
  cin >> m;
  cout << endl;

  if (m == 'A' || m == 'a')
    {
      cout << "You have selected Automatic Mode" << endl << endl;
      return 'a';
    }
  else if (m == 'M' || m == 'm')
    {
      cout << "You have selected Manual Mode" << endl << endl;
      return 'm';
    }
  else
    {
      cout << "Something went wrong, please try again." << endl;
      return 1;
    }
}
