#include "roman.h"

#define ADD_ELEMENT(N,S,T,E) \
  if(N >= T) return to_roman(N-T,S+E);

std::string Roman::to_roman(int n, std::string s)
{
  ADD_ELEMENT(n,s,1000,"M");
  ADD_ELEMENT(n,s,900,"CM");
  ADD_ELEMENT(n,s,500,"D");
  ADD_ELEMENT(n,s,400,"CD");
  ADD_ELEMENT(n,s,100,"C");
  ADD_ELEMENT(n,s,90,"XC");
  ADD_ELEMENT(n,s,50,"L");
  ADD_ELEMENT(n,s,40,"XL");
  ADD_ELEMENT(n,s,10,"X");
  ADD_ELEMENT(n,s,9,"IX");
  ADD_ELEMENT(n,s,5,"V");
  ADD_ELEMENT(n,s,4,"IV");
  ADD_ELEMENT(n,s,1,"I");
  return s;
}

std::string Roman::to_s(int n)
{
  return to_roman(n,"");
}
