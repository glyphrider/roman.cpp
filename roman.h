#ifndef __roman_h__
#define __roman_h__

#include <utility>
#include <list>
#include <string>

class Roman {
 public:
  Roman() = default;
  virtual ~Roman() = default;
  std::string to_s(int n) const;
  int to_i(const std::string& s) const;
protected:
  using StdPair = std::pair<int,std::string>;
  class Mapping : public StdPair {
  public:
    Mapping(int n, const std::string& s);
    bool canReduce(int n) const;
    bool canReduce(const std::string& s) const;
    int reduce(int n) const;
    std::string reduce(const std::string& s) const;
    int apply(int n) const;
    std::string apply(const std::string& s) const;
  };
  using Table = std::list<Mapping>;
  const Table& table() const;
  std::string to_roman(int n, const std::string& s, Table::const_iterator it, const Table::const_iterator end) const;
  int from_roman(const std::string& s, int n, Table::const_iterator it, const Table::const_iterator end) const;

  static const char * const empty_string_literal;
  static const int starting_value;
};

#endif
