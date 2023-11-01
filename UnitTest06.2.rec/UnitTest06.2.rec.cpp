#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-06.2.rek/PR-06.2.rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062rec
{
	TEST_CLASS(UnitTest062rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
			int res;
			res = Count(a, 15, 0);
			Assert::AreEqual(res, 8);
		}
	};
}
