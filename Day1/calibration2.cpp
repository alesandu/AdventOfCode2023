#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void updateLine(string line) {
  int len;
  len = line.length();
  for (int i = 0; i < len; i++) {
  }
}

int main() {
  int sum = 0, len = 0, c = 0;
  char add[2];
  string line;
  ifstream input;
  input.open("input.txt");
  if (input.is_open()) {
    while (getline(input, line)) {
      cout << line << '\n';
      updateLine(line);
      c = 0;
    }
    input.close();
    cout << "The total sum is: " << sum;
  } else
    cout << "Unable to open it";

  return 0;
}
