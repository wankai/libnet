
#progma once

class InetAddress
{
 public:
  InetAddress(int port);
  InetAddress(const string& ip, int port);
  InetAddress(IPAddress ip, int port);
 private:
  IPAddress ip_;
  int       port_;
};
