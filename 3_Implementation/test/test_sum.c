	#include "unity.h"
	#include "factorial.h"	
	#include "sum.c"


	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_sum(void)
	{
  		TEST_ASSERT_EQUAL(30, Binary_to_Decimal(10));
  		TEST_ASSERT_EQUAL(-30, Binary_to_Octal(101);
	
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_sum);

  		return UNITY_END();
	}
