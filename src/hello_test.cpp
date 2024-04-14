#include "hello.hpp"

#include <userver/utest/utest.hpp>

UTEST(SayHelloTo, Basic) {
  using ticket_manager::SayHelloTo;
  using ticket_manager::UserType;

  EXPECT_EQ(SayHelloTo("Developer", UserType::kFirstTime),
            "Hello, Developer!\n");
  EXPECT_EQ(SayHelloTo({}, UserType::kFirstTime), "Hello, unknown user!\n");

  EXPECT_EQ(SayHelloTo("Developer", UserType::kKnown),
            "Hi again, Developer!\n");
}
