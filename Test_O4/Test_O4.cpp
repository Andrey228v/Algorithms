#include "pch.h"
#include "CppUnitTest.h"
#include "..\O_4\Reshenie.cpp";
#include <vector>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestO4
{
	TEST_CLASS(TestO4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> V1 = { 3, 4, 6, 12, 13, 24 };
			int result = find_short_line(V1);
			Assert::IsTrue(15 == result);
		}

		TEST_METHOD(TestMethod2)
		{
			vector<int> V1 = { 3, 4, 10, 11, 19, 20 };
			int result = find_short_line(V1);
			Assert::IsTrue(3 == result);
		}

		TEST_METHOD(TestMethod3)
		{
			vector<int> V1 = { 1, 2, 3, 8, 9, 15 };
			int result = find_short_line(V1);
			Assert::IsTrue(9 == result);
		}

		TEST_METHOD(TestMethod5)
		{
			vector<int> V1 = { 1, 2, 3, 4, 5 };
			int result = find_short_line(V1);
			Assert::IsTrue(3 == result);
		}

		TEST_METHOD(TestMethod6)
		{
			vector<int> V1 = { 10, 20, 25 };
			int result = find_short_line(V1);
			Assert::IsTrue(15 == result);
		}

		TEST_METHOD(TestMethod7)
		{
			vector<int> V1 = { 0, 0 };
			int result = find_short_line(V1);
			Assert::IsTrue(0 == result);
		}




	};
}
