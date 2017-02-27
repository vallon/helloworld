#include <iostream>
#include <sstream>

using namespace std;

string GenerateMessage(const string& greeting, const string& target) {
  ostringstream s;
  s << greeting << ", " << target;
  return s.str();
}

int main(int argc, char **argv) {
  cout << GenerateMessage("Hello", "World") << endl;
}

