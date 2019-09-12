#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define atoa(x) #x

char *strrev(char *str)
{
  char *p1, *p2;

  if (! str || ! *str)
    return str;
  for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
  {
    *p1 ^= *p2;
    *p2 ^= *p1;
    *p1 ^= *p2;
  }
  return str;
}

void main() {
  char numbers[7] = {};
  char n1[3], n2[3];

  scanf("%s %s", &n1, &n2);

  char n1String[3];
  char n2String[3];
  char n1StringReverse[3];
  char n2StringReverse[3];

  memset(&n1String, 0, sizeof(n1String));
  sprintf(n1String, "%d", n1);
  memset(&n2String, 0, sizeof(n2String));
  sprintf(n2String, "%d", n2);

  // snprintf(n1StringReverse, 3, "%d", n1);
  // snprintf(n2StringReverse, 3, "%d", n2);
  // snprintf( NULL, 3, "%d", x );
  // itoa(n1, n1StringReverse, 10);
  // itoa(n2, n2StringReverse, 10);
  // asprintf (&n1String, "%i", n1);
  // asprintf (&n2String, "%i", n2);


  // sprintf(n1StringReverse, "%d", n1); // conversão de int para string
  // sprintf(n2StringReverse, "%d", n2); // conversão de int para string

  // for(int i=0; i<3; i++) {
  //   n1StringReverse[i] = strrev(n1String)[i];
  //   n2StringReverse[i] = strrev(n2String)[i];
  // }

  printf('n1StringBackwards: %i\n', n1String);
  printf('n2StringBackwards: %i', n2String);

  if(atoi(n1StringReverse) > atoi(n2StringReverse)) {
    // printf("%d", atoi(n1StringBackwards));
  } else {
    // printf("%d", atoi(n2StringBackwards));
  }
}