#include <iostream>
using namespace std;

void RemoveDups(char *data) {
  char *scanner = data, *result = data;
  for (; *scanner != '\0' && *(scanner + 1) != '\0'; ++scanner) {
    if (*scanner != *(scanner + 1))
      *result++ = *scanner;
  }
  *result++ = *scanner;
  *result = '\0';
}

int main() {
  {
    char data[] = "AAA BBB CCC";
    RemoveDups(data);
    cout << data << endl;
  }
  {
    char data[] = "";
    RemoveDups(data);
    cout << data << endl;
  }
  return 0;
}