#ifndef __roman_h__
#define __roman_h__

#include <list>
#include <string>

class Roman {
public:
  Roman() = default;
  virtual ~Roman() = default;
  std::string to_s(int n) const;
  int to_i(const std::string& s) const;
protected:
  using StdMapping = std::pair<int,std::string>;
	class Mapping : public StdMapping {
		public:
		Mapping(int n, const std::string& s);
		bool should_recurse(int n) const;
		bool should_recurse(const std::string& s) const;
	};
  using Table = std::list<Mapping>;
  static const Table& _table();
  std::string to_roman(int n, const std::string& s) const;
  int from_roman(const std::string& s, int n) const;
};

#endif
