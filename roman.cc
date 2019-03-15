#include "roman.h"

Roman::Roman()
{
  _table.push_back(Table::value_type(1000,"M"));
  _table.push_back(Table::value_type(900,"CM"));
  _table.push_back(Table::value_type(500,"D"));
  _table.push_back(Table::value_type(400,"CD"));
  _table.push_back(Table::value_type(100,"C"));
  _table.push_back(Table::value_type(90,"XC"));
  _table.push_back(Table::value_type(50,"L"));
  _table.push_back(Table::value_type(40,"XL"));
  _table.push_back(Table::value_type(10,"X"));
  _table.push_back(Table::value_type(9,"IX"));
  _table.push_back(Table::value_type(5,"V"));
  _table.push_back(Table::value_type(4,"IV"));
  _table.push_back(Table::value_type(1,"I"));
}

Roman::~Roman()
{
}

std::string Roman::to_roman(int n, std::string s)
{
  for(auto t:_table)
    if(n >= t.first)
      return to_roman(n-t.first,s+t.second);
  return s;
}

int Roman::from_roman(std::string s, int n)
{
  for(auto t:_table)
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
