#include <gtest/gtest.h>
#include <hello-world.hpp>

struct hello_world_test : public ::testing::Test {
    virtual void SetUp() override {}
    virtual void TearDown() override {}
};

TEST_F(hello_world_test, PassNullPointer){

    int result = hello_world_main(0,1);

    EXPECT_EQ(result, -1);
}