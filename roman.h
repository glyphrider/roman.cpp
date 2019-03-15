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
  typedef std::list<std::pair<int,std::string>> Table;
protected:
  Table _table;
  // std::list<std::pair<int,std::string>> _table;
  std::string to_roman(int n, std::string s);
  int from_roman(std::string s, int n);

};

#endif
