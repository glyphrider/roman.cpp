#include "roman.h"

Roman::Mapping::Mapping(int n, const std::string& s) : Roman::StdMapping(n,s)
{
}

bool Roman::Mapping::should_recurse(int n) const
{
	return n >= first;
}

bool Roman::Mapping::should_recurse(const std::string& s) const
{
	return 0 == s.compare(0,second.size(),second);
}

const Roman::Table& Roman::_table()
{
	static Roman::Table _static = 
	{
    {1000,"M"},
    {900,"CM"},
    {500,"D"},
    {400,"CD"},
    {100,"C"},
    {90,"XC"},
    {50,"L"},
    {40,"XL"},
    {10,"X"},
    {9,"IX"},
    {5,"V"},
    {4,"IV"},
    {1,"I"}
  };
	return _static;
}

std::string Roman::to_roman(int n, const std::string& s) const
{
  for(const Mapping& t:_table())
	{
		if(t.should_recurse(n))
		{
      return to_roman(n-t.first,s+t.second);
		}
	}
  return s;
}

int Roman::from_roman(const std::string& s, int n) const
{
  for(const Mapping& t:_table())
	{
		if(t.should_recurse(s))
		{
      return from_roman(s.substr(t.second.size()),n+t.first);
		}
	}
  return n;
}

std::string Roman::to_s(int n) const
{
  return to_roman(n,"");
}

int Roman::to_i(const std::string& s) const
{
  return from_roman(s,0);
}
