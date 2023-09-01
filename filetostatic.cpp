
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

const int MAXARR = 1000;
const int SENT = -1;


int main()
{
  //vocabulary
  int arr[MAXARR];
  string flname;
  float sum = 0;
  
  //Prepare File  
  cout << "File input: ";
  cin >> flname;
  cout << endl;
  ifstream FILEBOI(flname);
  if (!FILEBOI.is_open())
    {
      cout << "Error. File not found." << endl;
      return 1;
    }

  //loop-read the file;
  int tempnum;
  int i = 0;
  while (i < MAXARR)
    {
      FILEBOI >> tempnum;
      if (tempnum == SENT)
	break;

      arr[i] = tempnum;
      i++;
    }

  //Security
  FILEBOI.close();

  //loop to read array
  int n = 0;
  float tempfloat;
  while (n < i)
    {
      if (n%10 == 0)
	cout << endl; //for the purpose of making it easier to read
      tempfloat = arr[n];
      cout << arr[n] << " ";
      sum += tempfloat;
      n++;
    }

  cout << endl;
  //QUIKMAFS
  cout << "The average of the " << n << " numbers is " << sum/n << endl;
  //wrap it up
  cout << endl;
  return 0;
}

//In case you forget (I know you will):
//  -1 is the SENTINAL
//  filetest.txt lists the numbers 0 through 99
//  filetest2.txt lists the numbers 0 through 150, with SENTINAL after 127
