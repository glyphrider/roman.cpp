#include <string>

class Roman {
public:
  std::string to_s(int n);
protected:
  std::string to_roman(int n, std::string s);
};
