#include "roman.h"

#define TABLE_ENTRY(N,S) _table.push_back(Table::value_type(N,S))

Roman::Roman()
{
  TABLE_ENTRY(1000,"M");
  TABLE_ENTRY(900,"CM");
  TABLE_ENTRY(500,"D");
  TABLE_ENTRY(400,"CD");
  TABLE_ENTRY(100,"C");
  TABLE_ENTRY(90,"XC");
  TABLE_ENTRY(50,"L");
  TABLE_ENTRY(40,"XL");
  TABLE_ENTRY(10,"X");
  TABLE_ENTRY(9,"IX");
  TABLE_ENTRY(5,"V");
  TABLE_ENTRY(4,"IV");
  TABLE_ENTRY(1,"I");
}

Roman::~Roman()
{
}

std::string Roman::to_roman(int n, std::string s)
{
  for(auto e:_table)
    if(n >= e.first) return to_roman(n-e.first,s+e.second);
  return s;
}

int Roman::from_roman(std::string s, int n)
{
  for(auto e:_table)
    if(0 == s.compare(0,e.second.size(),e.second)) return from_roman(s.substr(e.second.size()),n+e.first);
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
