#include <stdio.h>

// function prototypes
void printGreeting(    char* aGreeting , char* aName );
void printAGreeting(   char* greeting );
void printAnAddressee( char* aName );
void printAComma(   void );
void printANewLine( void );

int main() 
{
  printGreeting( "Hi" , "Bub" );
  return 0; 
}

void printGreeting( char* aGreeting , char* aName ) {
printAGreeting( aGreeting );
printAComma();
printAnAddressee( aName );
printANewLine();
}

void printAGreeting( char* greeting  )  {
  printf( "%s" , greeting );
}

void printAnAddressee( char* aName ) {
  printf( "%s", aName ); // typo here page 60 : aName is missing so we have a segmentation fault
}

void printAComma( void ) {
printf( ", " );
}

void printANewLine()    {
  printf( "\n" );
}
