#pragma once

namespace net {

class Task
{
 public:
  virtual void run() = 0;
};

class LambdaTask : public Task
{
 public
  override void run()
  {
    
  }
};

template<Fun, Arg...>
auto make_lambda(Fun&& f, Arg... args)
{
  return std::make_unique<
}
} // namespace net
