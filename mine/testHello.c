#include "unity.h"
#include "hello.h"

void setUp()
{
	printf("-- test started\n");
}

void tearDown()
{
	printf("-- test ended\n");
}

void test_sum()
{
	TEST_ASSERT_EQUAL(3, sum(1, 2));
}
