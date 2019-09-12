#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// char * reverseString(char * string) {
//   int strLen = strlen(string);
//   char newString[strLen];

//   for(int i=0; i<strLen; i++) {
//     for(int j=strLen; j>0; i--) {
//       newString[i] = string[j];
//     }
//   }
//   return newString;
// }

void reverse(char* str)
{
	// get length of the string
	int n = strlen(str);

	// start swapping characters from both ends of the string
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		char ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
}

int main() {
  int numEntradas;
  char entradaAtual[10];

  char entradaAtualReversa[10];

  scanf("%i", &numEntradas);

  for(int i=0; i<numEntradas; i++) {
    scanf("%s", &entradaAtual);
    
    reverse(entradaAtualReversa);
    // printf("%s", );
  }


  return 0;
}