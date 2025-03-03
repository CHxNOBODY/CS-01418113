#include <iostream>
#include "Media.h"
using namespace std;

int main() {
  Media *media = new Media("media", 811200000);
  cout << media->getTitle() << endl;
  cout << media->getSizeInBytes() << endl;
  cout << media->getSizeInKB() << endl;
  cout << media->getSizeInMB() << endl;
  cout << media->getSizeInGB() << endl;
}