#progma once

#include <stdint.h>
#include <string>

using namespace std;

namespace net {

class IPAddress
{
 public:
 
  IPAddress(uint32_t addr);
  
  IPAddress(const string& ip);
  
  uint32_t addr() const
  {
    return addr_;
  }
  
  string toString();
  
 private:
  uint32_t addr_;
};

}
