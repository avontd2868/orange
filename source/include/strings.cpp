#include "strings.hpp"

string trim(const string &s)
{ 
  string::const_iterator si(s.begin()), se(s.end());
  
  while ((si!=se) && (*si==' '))
    si++;
  while ((si!=se) && (se[-1]==' '))
    se--;
  
  return string(si, se);
}


void trim(char *s)
{ 
  char *si = s, *se = s + strlen(s);

  while (*si && (*si==' '))
    si++;
  while ((si!=se) && (se[-1]==' '))
    se--;

  while(si!=se)
    *(s++) = *(si++);
  *s = 0;
}
