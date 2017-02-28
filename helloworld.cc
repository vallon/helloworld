#include <iostream>
#include <msggen.h>

using namespace std;

int main(int argc, char **argv) {
  cout << GenerateMessage("Hello", "World") << endl;
  return 0;
}

