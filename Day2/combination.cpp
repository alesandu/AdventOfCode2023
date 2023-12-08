#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string deleteGame(string);

string getWords(string line) {
  int pos = 0;
  line = deleteGame(line);
  cout << line << endl;
  while (pos > line.size()) {
    int pos = line.find(";");
    line.erase(0, pos + 1);
    cout << pos << "\n";
    cout << line;
  }
  return line;
}

string deleteGame(string line) {
  int pos = line.find(":");
  line.erase(0, pos + 2);
  return line;
}

int main() {
  int r = 12;
  int g = 13;
  int b = 14;
  int len, pos, id = 0;
  string line;
  ifstream input;
  input.open("input.txt");
  if (input.is_open()) {
    while (getline(input, line)) {
      len = line.length();
      line = getWords(line);
      // cout << line << '\n';
    }
    input.close();
  } else
    cout << "Unable to open it";

  return 0;
}
