#progma once

#include <stdint.h>
#include <string>

using namespace std;

namespace net {

class InetAddress
{
 public:
 
  InetAddress(uint32_t addr);
  
  InetAddress(const string& ip);
  
 private:
  uint32_t addr_;
};

}
