#include "ctest.h"
#include "logic.h"
#include "screen.h"

CTEST(logic_suite, check_inputNum) {
	int inputNum = 0;
	int count = 100;
	check_inputNum(inputNum, &count); 
	ASSERT_FALSE(check_inputNum(inputNum, &count));
	inputNum = 11;
	ASSERT_FALSE(check_inputNum(inputNum, &count));
	inputNum =  7;
	ASSERT_TRUE(check_inputNum(inputNum, &count));
	inputNum = 10;
	ASSERT_TRUE(check_inputNum(inputNum, &count));
}