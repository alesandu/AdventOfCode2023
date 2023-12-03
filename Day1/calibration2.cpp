#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string updateLine(string line) {
  int len;
  len = line.length();
  for (int i = 0; i < len; i++) {
    switch (line[i]) {
    case 'o':
      if (line[i + 1] == 'n' && line[i + 2] == 'e')
        line[i] = '1';
      break;
    case 't':
      switch (line[i + 1]) {
      case 'w':
        if (line[i + 2] == 'o')
          line[i] = '2';
        break;
      case 'h':
        if (line[i + 2] == 'r' && line[i + 3] == 'e' && line[i + 4] == 'e')
          line[i] = '3';
        break;
      }
      break;
    case 'f':
      switch (line[i + 1]) {
      case 'o':
        if (line[i + 2] == 'u' && line[i + 3] == 'r')
          line[i] = '4';
        break;
      case 'i':
        if (line[i + 2] == 'v' && line[i + 3] == 'e')
          line[i] = '5';
        break;
      }
      break;
    case 's':
      switch (line[i + 1]) {
      case 'i':
        if (line[i + 2] == 'x')
          line[i] = '6';
        break;
      case 'e':
        if (line[i + 2] == 'v' && line[i + 3] == 'e' && line[i + 4] == 'n')
          line[i] = '7';
        break;
      }
      break;
    case 'e':
      if (line[i + 1] == 'i' && line[i + 2] == 'g' && line[i + 3] == 'h' &&
          line[i + 4] == 't')
        line[i] = '8';
      break;
    case 'n':
      if (line[i + 1] == 'i' && line[i + 2] == 'n' && line[i + 3] == 'e')
        line[i] = '9';
      break;
    }
  }
  return line;
}

int main() {
  int sum = 0, len = 0, c = 0;
  char add[2];
  string line;
  ifstream input;
  input.open("input.txt");
  if (input.is_open()) {
    while (getline(input, line)) {
      // cout << line << '\n';
      line = updateLine(line);
      //  cout << line << '\n';
      len = line.length();
      c = 0;
      for (int i = 0; i < len; i++) {
        if (isdigit(line[i]) && c == 0) {
          add[0] = line[i];
          c++;
        } else if (isdigit(line[i])) {
          add[1] = line[i];
          c++;
        }
        if (c == 1) {
          add[1] = add[0];
        }
      }
      cout << add << '\n';
      sum += atoi(add);
    }
    input.close();
    cout << "The total sum is: " << sum;
  } else
    cout << "Unable to open it";

  return 0;
}
