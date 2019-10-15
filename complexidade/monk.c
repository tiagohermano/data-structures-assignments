#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char letter);

int main() {  
  int numberOfStrings;
  scanf("%d", &numberOfStrings);

  int vowelCounters[numberOfStrings];

  int i;
  int j;
  getchar();
  for(i=0; i<numberOfStrings; i++) {
    int vowelCounter = 0;
    char word[1000];
    fgets(word, 1000, stdin);
    for(j=0; j<strlen(word); j++) {
      vowelCounter += isVowel(word[j]);
    }
    vowelCounters[i] = vowelCounter;
  }
  
  for(i=0; i<numberOfStrings; i++) {
    printf("%d\n", vowelCounters[i]);
  }
  return 0;
}

int isVowel(char letter) {
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'}; 
  int i;
  for(i=0; i<5; i++) {
    if(tolower(letter) == vowels[i]) {
      return 1;
    }
  }
  return 0;
}