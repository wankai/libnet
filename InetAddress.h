#progma once

#include <stdint.h>
#include <string>

using namespace std;

namespace net {

class InetAddress
{
 public:
  /**
   * @param addr 
   * /
  InetAddress(uint32_t addr);
  
  /**
   * @param ip
   * /
  InetAddress(const string& ip);
  
 private:
  uint32_t addr_;
};

}
