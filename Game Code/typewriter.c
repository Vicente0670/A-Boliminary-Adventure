#include <string.h>
#include <windows.h>
#include <stdio.h>

const unsigned int delay = 17; // in milliseconds

void typeWriter(char text[20]) {
  int length = strlen(text);
  for (int i = 0; i < length; i++) {
    printf("%c", *(text + i));
    Sleep(delay);
  }
  printf("\n");
}