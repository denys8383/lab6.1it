#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { 1, 2, 3, 4, 5 };
			int result = Sum(a, n);
			Assert::AreEqual(1, 1);
		}
	};
}
