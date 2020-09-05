#include "logic.h"
#include "ctest.h"
#include "screen.h"

CTEST(logic_suite, check_inputNum)
{
    int inputNum = 0;
    int count = 100;
    check_inputNum(inputNum, &count);
    ASSERT_FALSE(check_inputNum(inputNum, &count));
    inputNum = 11;
    ASSERT_FALSE(check_inputNum(inputNum, &count));
    inputNum = 7;
    ASSERT_TRUE(check_inputNum(inputNum, &count));
    inputNum = 10;
    ASSERT_TRUE(check_inputNum(inputNum, &count));
}
CTEST(logic_suite, check_inputNum2)
{
    int inputNum = 5;
    int count = 4;
    check_inputNum2(inputNum, &count);
    ASSERT_FALSE(check_inputNum2(inputNum, &count));
    inputNum = 7;
    count = 1;
    check_inputNum2(inputNum, &count);
    ASSERT_FALSE(check_inputNum2(inputNum, &count));
    inputNum = 3;
    count = 6;
    check_inputNum2(inputNum, &count);
    ASSERT_TRUE(check_inputNum2(inputNum, &count));
    inputNum = 9;
    count = 26;
    check_inputNum2(inputNum, &count);
    ASSERT_TRUE(check_inputNum2(inputNum, &count));
}