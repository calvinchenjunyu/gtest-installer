/*
 * Created by liyechen
 * Time 2019/04/26 18:05
 * Email <gliyechen@hotmail.com>
 *
 */
 
#include "gtest/gtest.h"

TEST( ExampleTest, First ) {
  EXPECT_TRUE( true );
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv); 
  return RUN_ALL_TESTS();
}
