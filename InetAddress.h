
#progma once

class InetAddress
{
 public:
  InetAddress(const string& ip, int port)
    : ip_(ip),
      port_(port)
  {
  }
  
  InetAddress(IPAddress ip, int port)
    : ip_(ip),
      port_(port)
  {
  }
  
  string toString();
  
 private:
  IPAddress ip_;
  int       port_;
};
