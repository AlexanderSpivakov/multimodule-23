#include <speaker.h>

int main( int argc, const char ** argv )
{
  if ( argc == 3 )
  {
  	LogNameAge( argv[1], argv[2] );
  	return 0;
  }
  else
  {
  	LogNameAge( 0, 0 );
  	return argc;
  }
}