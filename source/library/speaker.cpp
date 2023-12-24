#include "speaker.h"
#include <stdio.h>

static void LogFormattedNameAge( const char* name, const char* age )
{
  printf("Hi, my name is %s I'm %s year old. What about you?\n", name, age );
}

void LogNameAge( const char* name, const char* age )
{
  if( name && age )
  {
  	LogFormattedNameAge( name, age );
  }
  else
  {
  	printf("*** INVALID PARAMETERS ***\n" );
  }
}