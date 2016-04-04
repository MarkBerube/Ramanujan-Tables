/**********************************************************/
/* Programmer: Mark Berube                                */
/*                                                        */
/* Program : Ramanujan Tables                             */
/**********************************************************/

#include <stdio.h>

int e3( int n ) ;

int main( int argc, char *argv[] ) {

  int a, b, c, d, n, sum, o, lim ;

  printf( "\n\nPlease enter a maximum value for the Ramanujan " ) ;
  printf( "table. It must be a value less than or equal to 1 million.\n\n" ) ;

  scanf( "%d", &n ) ;
 
  sum = 0 ;

  lim = 100 ;

  printf( "\n\n----------------------------------------------\n" ) ;
  printf( "Rama-\tFirst\tSecond\tFirst\tSecond\tOrder\n" ) ;
  printf( "nujan\tCube\tCube\tRoot\tRoot\n" ) ;
  printf( "Number\n" ) ;
  printf( "----------------------------------------------\n\n" ) ;

  for ( a = 1 ; a < lim ; a++ )
    for ( b = 1 ; b < lim ; b++ )
      for ( c = 1 ; c < lim ; c++ )
	for (d = 1 ; d < lim ; d++ )
	  if ( e3(a) + e3(b) == e3(c) + e3(d) )
	    if ( e3(a) + e3(b) > sum && a != c && b != d && a != d )
	      if ( b != c && e3(a) + e3(b) < n ) {

		sum = e3(a) + e3(b) ;

		o += 1 ;

		printf( "%d\t%d\t%d\t%d\t%d\t", sum, e3(a), e3(b), a, b ) ;
		printf( "%d", o ) ;
		printf( "\n\t%d\t%d\t%d\t%d", e3(c), e3(d), c, d ) ;
		printf( "\n\n" ) ;

	      }
	
  printf( "----------------------------------------------\n\n" ) ;
     
  return 0 ;

}

int e3( int n ) {

  return ( n * n * n ) ;

}
