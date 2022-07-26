#include <iostream>
#include <string>
using namespace std;

void myFunction (string fname, int age) {
  cout << fname << "  name .  "<<age <<  "   year old   \n";
}

int main() {
  myFunction("Liam", 5);
  myFunction("Jenny",10);
  myFunction("Anja",1);
  return 0;
}

