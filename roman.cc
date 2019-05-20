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

const Roman::Translation Roman::_table;

std::string Roman::to_roman(int n, const std::string& s) const
{
  for(const auto& t:_table)
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
  for(const auto& t:_table)
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
