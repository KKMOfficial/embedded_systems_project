#include <main.cpp>
#include <unity.h>

void test_step_1(void){
  TEST_ASSERT_EQUAL(0,H_h1());
  TEST_ASSERT_EQUAL(1,H_h2());
  TEST_ASSERT_EQUAL(1,H_h3());
  TEST_ASSERT_EQUAL(0,H_h4());
}

void test_step_2(void){
  TEST_ASSERT_EQUAL(1,H_h1());
  TEST_ASSERT_EQUAL(1,H_h2());
  TEST_ASSERT_EQUAL(0,H_h3());
  TEST_ASSERT_EQUAL(0,H_h4());
}

int main(int argc, char const *argv[])
{
  controller_initialize();
  // two heaters placed in room 2,3 at the first
  // init_test_input();

  UNITY_BEGIN();


  // step 1
  // set_test_input(X,C_get,C_diff)
  set_test_input((int[]){15,18,19,17},(double[]){17.0,16.0,16.0,17.0},(double[]){1.0,1.0,1.0,1.0});
  controller_step();
  RUN_TEST(test_step_1);

  set_test_input((int[]){16.5,15.8,18.75,18.5},(double[]){17.0,16.0,16.0,17.0},(double[]){1.0,1.0,1.0,1.0});
  controller_step();
  controller_step();
  RUN_TEST(test_step_2);

  UNITY_END();
  return 0;
}

