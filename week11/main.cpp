#include <iostream>
#include "Media.h"
#include "Image.h"
using namespace std;

int main() {
  Media *media = new Image("image.jpg", 811200, 15, 10, 'x', 'r');
  cout << media->getTitle() << endl;
  cout << media->getSizeInBytes() << endl;
  cout << media->getSizeInKB() << endl;
  cout << media->getSizeInMB() << endl;
  cout << media->getSizeInGB() << endl;
  cout << media->info() << endl;
	cout << media->toScreen() << endl;
  return 0;
}