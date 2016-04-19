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
  
 private:
  uint32_t addr_;
};

}
