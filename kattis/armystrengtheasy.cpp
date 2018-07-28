#include <stdio.h>
#include <algorithm>

using namespace std;

int x;
int testcases;

int main() {
  x = scanf("%d", &testcases);

  for (int i = 0; i < testcases; i++) {
    int godzilla, mechagodzilla;
    int maxGodzilla = 0;
    int maxMecha = 0;
    int y;
    x = scanf("%d %d", &godzilla, &mechagodzilla);
    for (int j = 0; j < godzilla; j++) {
      x = scanf("%d", &y);
      maxGodzilla = max(maxGodzilla, y);
    }

    for (int j = 0; j < mechagodzilla; j++) {
      x = scanf("%d" , &y);
      maxMecha = max(maxMecha, y);
    }

    if (maxMecha > maxGodzilla) {
      printf("MechaGodzilla\n");
    } else {
      printf("Godzilla\n");
    }
  }

  return 0;
}
