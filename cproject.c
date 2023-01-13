#include <stdio.h>

// Copies the characters from the source string to the destination string
char* mystrcpy(char* destination, const char* source) {
  // Iterate through the source string
  int i = 0;
  while (source[i] != '\0') {
    // Copy the character from the source string to the destination string
    destination[i] = source[i];
    i++;
  }
  // Add the null terminator to the end of the destination string
  destination[i] = '\0';
  // Return a pointer to the destination string
  return destination;
}

// Appends the source string to the end of the destination string
char* mystrcat(char* destination, const char* source) {
  // Find the end of the destination string
  int dest_len = 0;
  while (destination[dest_len] != '\0') {
    dest_len++;
  }
  // Append the source string to the end of the destination string
  int i = 0;
  while (source[i] != '\0') {
    destination[dest_len + i] = source[i];
    i++;
  }
  // Add the null terminator to the end of the destination string
  destination[dest_len + i] = '\0';
  // Return a pointer to the destination string
  return destination;
}

int main() {
  char str1[100] = "Hello, ";
  char str2[] = "world!";
  char str3[100];
  
  mystrcpy(str3, str1);
  printf("mystrcpy(str3, str1): %s\n", str3);
  
  mystrcat(str1, str2);
  printf("mystrcat(str1, str2): %s\n", str1);
  
  return 0;
}
