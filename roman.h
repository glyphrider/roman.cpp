#ifndef _roman_h_
#define _roman_h_

#include <list>
#include <string>

class Roman {
public:
  Roman();
  virtual ~Roman();
  std::string to_s(int n);
  int to_i(std::string s);
protected:
  typedef std::pair<int,std::string> Mapping;
  typedef std::list<Mapping> Table;
  Table _table;
  std::string to_roman(int n, std::string s);
  int from_roman(std::string s, int n);
};

#endif
