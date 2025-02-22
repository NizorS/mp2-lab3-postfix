
#include <gtest.h>
#include <arithmetic.h>


TEST(Arithmetic, support_all_correct_form_number)
{
	std::string infix1 = "1";
	ASSERT_NO_THROW(Arithmetic try1(infix1));

}
TEST(Arithmetic, throw_when_zero_devision)
{
	std::string infix1 = "1+(4/(1-1))";
	Arithmetic try1(infix1);
	ASSERT_ANY_THROW(try1.Calculate());
}
TEST(Arithmetic, support_brackets)
{
	std::string infix1 = "(1+1)";
	ASSERT_NO_THROW(Arithmetic try1(infix1));
	std::string infix2 = "(1*1*1)";
	ASSERT_NO_THROW(Arithmetic try2(infix2));
}




