#include "pch.h"
#include "CppUnitTest.h"
#include "..\Z29\Reshenie.cpp";
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace TestZ29
{
	TEST_CLASS(TestZ29)
	{
	public:
		
		TEST_METHOD(TestMethod1){
		
			vector<int> V1 = { 1, 5, 2 };
			int start_position = 0;
			int N = V1.size();
			vector<int> cashe(N, -1);
			cashe[N - 1] = 0;
			cashe[N - 2] = abs(V1[N - 1] - V1[N - 2]);

			int result = find_short_path(V1, start_position, cashe);
			Assert::IsTrue(3 == result);

		}
	
		TEST_METHOD(TestMethod2) {

			vector<int> V1 = { 1, 99, 2, 99, 3, 99, 4, 99, 5, 99 };
			int start_position = 0;
			int N = V1.size();
			vector<int> cashe(N, -1);
			cashe[N - 1] = 0;
			cashe[N - 2] = abs(V1[N - 1] - V1[N - 2]);

			int result = find_short_path(V1, start_position, cashe);
			Assert::IsTrue(98 == result);

		}

	
	};
}
