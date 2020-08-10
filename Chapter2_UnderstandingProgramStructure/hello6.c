#include <stdio.h>

void printAGreeting( char* greeting  )  {
  printf( "%s" , greeting );
}

void printAComma( void )    {
  printf( ", ");
}

void printAnAddressee( char* aName ) {
  printf( "%s", aName ); // typo here page 56 : aName is missing so we have a segmentation fault
}

void printANewLine()    {
  printf( "\n" );
}

void printGreeting( char* aGreeting, char* aName )  {
  printAGreeting( aGreeting );
  printAComma();
  printAnAddressee( aName );
  printANewLine();
}

int main()  {
  printGreeting( "Hi", "Bub" );
  return 0;
}
