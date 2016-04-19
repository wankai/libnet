#progma once

namespace net {
  
class network_engine
{
 public:
  void start();
 private:
};

class engine_builder_t
{
 public:
  void thread_num(int num);
  
  std::unique_ptr<network_engine> build();
};
std::unique_ptr<engine_builder_t> engine_builder()
{
  return std::make_unique<engine_builder_t>();
}
} // namespace net
