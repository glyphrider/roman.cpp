#include "roman.h"

Roman::Translation Roman::_table;

Roman::Translation::Translation()
{
  push_back(Mapping(1000,"M"));
  push_back(Mapping(900,"CM"));
  push_back(Mapping(500,"D"));
  push_back(Mapping(400,"CD"));
  push_back(Mapping(100,"C"));
  push_back(Mapping(90,"XC"));
  push_back(Mapping(50,"L"));
  push_back(Mapping(40,"XL"));
  push_back(Mapping(10,"X"));
  push_back(Mapping(9,"IX"));
  push_back(Mapping(5,"V"));
  push_back(Mapping(4,"IV"));
  push_back(Mapping(1,"I"));
}

Roman::Roman()
{
}

Roman::~Roman()
{
}

std::string Roman::to_roman(int n, std::string s)
{
  for(auto t:Roman::_table)
    if(n >= t.first)
      return to_roman(n-t.first,s+t.second);
  return s;
}

int Roman::from_roman(std::string s, int n)
{
  for(auto t:Roman::_table)
    if(0 == s.compare(0,t.second.size(),t.second))
      return from_roman(s.substr(t.second.size()),n+t.first);
  return n;
}

std::string Roman::to_s(int n)
{
  return to_roman(n,"");
}

int Roman::to_i(std::string s)
{
  return from_roman(s,0);
}
