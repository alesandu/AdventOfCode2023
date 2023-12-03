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
        line[i] = line[i + 1] = line[i + 2] = '1';
    case 't':
      switch (line[i + 1]) {
      case 'w':
        if (line[i + 2] == 'o')
          line[i] = line[i + 1] = line[i + 2] = '2';
      case 'h':
        if (line[i + 2] == 'r' && line[i + 3] == 'e' && line[i + 4] == 'e')
          line[i] = line[i + 1] = line[i + 2] = line[i + 3] = line[i + 4] = '3';
      }
    case 'f':
      switch (line[i + 1]) {
      case 'o':
        if (line[i + 2] == 'u' && line[i + 3] == 'r')
          line[i] = line[i + 1] = line[i + 2] = line[i + 3] = '4';
      case 'i':
        if (line[i + 2] == 'v' && line[i + 3] == 'e')
          line[i] = line[i + 1] = line[i + 2] = line[i + 3] = '5';
      }
    case 's':
      switch (line[i + 1]) {
      case 'i':
        if (line[i + 2] == 'x')
          line[i] = line[i + 1] = line[i + 2] = '6';
      case 'e':
        if (line[i + 2] == 'v' && line[i + 3] == 'e' && line[i + 4] == 'n')
          line[i] = line[i + 1] = line[i + 2] = line[i + 3] = line[i + 4] = '7';
      }
    case 'e':
      if (line[i + 1] == 'i' && line[i + 2] == 'g' && line[i + 3] == 'h' &&
          line[i + 4] == 't')
        line[i] = line[i + 1] = line[i + 2] = line[i + 3] = line[i + 4] = '8';
    case 'n':
      if (line[i + 1] == 'i' && line[i + 2] == 'n' && line[i + 3] == 'e')
        line[i] = line[i + 1] = line[i + 2] = line[i + 3] = '9';
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
      cout << line << '\n';
      line = updateLine(line);
      cout << line << '\n';
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
