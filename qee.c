#pragma once

int countSolution( double a, double b, double c )
{
  if ( a == 0. )
  {
    if ( b == 0. )
    {
      if ( c == 0. )
        return -1;
      else
        return 0;
    }
  }
  else
  {
    const double discr = b * b - 4. * a * c;
    if ( discr == 0. )
      return 1;
    else if ( discr < 0. )
      return 0;
    else
      return 2;
  }
}
