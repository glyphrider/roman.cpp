#include "roman.h"

#define ADD_ELEMENT(N,S,T,E) \
  if(N >= T) return to_roman(N-T,S+E);

std::string Roman::to_roman(int n, std::string s)
{
  if(n >= 1000) return to_roman(n-1000,s+"M");
  if(n >= 900) return to_roman(n-900,s+"CM");
  if(n >= 500) return to_roman(n-500,s+"D");
  if(n >= 400) return to_roman(n-400,s+"CD");
  if(n >= 100) return to_roman(n-100,s+"C");
  if(n >= 90) return to_roman(n-90,s+"XC");
  if(n >= 50) return to_roman(n-50,s+"L");
  if(n >= 40) return to_roman(n-40,s+"XL");
  if(n >= 10) return to_roman(n-10,s+"X");
  if(n >= 9) return to_roman(n-9,s+"IX");
  if(n >= 5) return to_roman(n-5,s+"V");
  if(n >= 4) return to_roman(n-4,s+"IV");
  //if(n >= 1) return to_roman(n-1,s+"I");
  ADD_ELEMENT(n,s,1,"I");
  return s;
}

std::string Roman::to(int n)
{
  return to_roman(n,"");
}
