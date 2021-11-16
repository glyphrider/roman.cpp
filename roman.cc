#include "roman.h"

Roman::Mapping::Mapping(int n, const std::string &s) : StdPair(n, s)
{
}

bool Roman::Mapping::canReduce(int n) const
{
  return n >= first && first > 0;
}

bool Roman::Mapping::canReduce(const std::string &s) const
{
  return 0 == s.compare(0, second.size(), second);
}

int Roman::Mapping::reduce(int n) const
{
  return n - first;
}

std::string Roman::Mapping::reduce(const std::string& s) const
{
  return s.substr(second.size());
}

int Roman::Mapping::apply(int n) const
{
  return n + first;
}
std::string Roman::Mapping::apply(const std::string& s) const
{
  return s + second;
}

const Roman::Table &Roman::table() const
{
  static Roman::Table _static =
      {
          {1000, "M"},
          {900, "CM"},
          {500, "D"},
          {400, "CD"},
          {100, "C"},
          {90, "XC"},
          {50, "L"},
          {40, "XL"},
          {10, "X"},
          {9, "IX"},
          {5, "V"},
          {4, "IV"},
          {1, "I"}};
  return _static;
}

std::string Roman::to_roman(int n, const std::string &s, Roman::Table::const_iterator it, const Roman::Table::const_iterator end) const
{
  if(n == 0) return s;
  for( ; it != end; it++)
  {
    if (it->canReduce(n))
    {
      return to_roman(it->reduce(n), it->apply(s), it, end);
    }
  }
  throw s;
}

int Roman::from_roman(const std::string &s, int n, Roman::Table::const_iterator it, const Roman::Table::const_iterator end) const
{
  if(s.empty()) return n;
  for( ; it != end; it++)
  {
    if (it->canReduce(s))
    {
      return from_roman(it->reduce(s), it->apply(n),it,end);
    }
  }
  throw n;
}

std::string Roman::to_s(int n) const
{
  const Roman::Table &t = table();
  return to_roman(n, empty_string_literal, t.begin(), t.end());
}

int Roman::to_i(const std::string &s) const
{
  const Roman::Table &t = table();
  return from_roman(s, starting_value, t.begin(), t.end());
}

const char *const Roman::empty_string_literal = "";
const int Roman::starting_value = 0;
