
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

void fromfile(int* dynarr, ifstream &filestuff, int arrsize);
void average(int* dynarr, int arrsize);
void print(int* dynarr, int arrsize);


int main()
{
  //vocab
  int arrsize;
  string filename;
  
  //setup
  cout << "Please enter the file name: " << endl;
  cin >> filename;
  ifstream filestuff(filename);
  if (!filestuff.is_open())
    {
      cout << "Error. Please try again" << endl;
      return 1;
    }
  else
    cout << "File " << filename << " opened succesfully." << endl;

  //Array setup
  cout << "Please enter the number of digits you want: ";
  cin >> arrsize;
  int* dynarr = new int[arrsize];

  //Functions
  fromfile(dynarr, filestuff, arrsize);
  average(dynarr, arrsize);
  print(dynarr, arrsize);

  //clean up
  filestuff.close();
  delete[] dynarr;
  return 0;
}

void fromfile(int* dynarr, ifstream &filestuff, int arrsize)
{
  int i = 0;

  filestuff >> dynarr[i];
  while (filestuff && i < arrsize - 1)
    {
      i++;
      filestuff >> dynarr[i];
    }
}

void average(int* dynarr, int arrsize)
{
  int i = 0;
  float sum = 0;
  float tempfloat;

  while (i < arrsize)
    {
      tempfloat = dynarr[i];
      sum += tempfloat;
      i++;
    }

  cout << "The average of the " << arrsize << " numbers is " << sum/arrsize << endl;
}

void print(int* dynarr, int arrsize)
{
  int i = 0;

  cout << "The " << arrsize << " numbers are: " << endl;
  while (i < arrsize)
    {
      cout << dynarr[i] << " ";
      i++;

      //to make things more visually pleasing
      if (i%10 == 0)
	cout << endl;
    }
  cout << endl << "task complete" << endl;
}
