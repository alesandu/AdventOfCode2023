#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int sum = 0, len = 0, c = 0;
  char add[2];
  string line;
  ifstream input;
  input.open("del.txt");
  if (input.is_open()) {
    while (getline(input, line)) {
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
