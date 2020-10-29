#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3/lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = S(1000);
			Assert::AreEqual(t, 0.);
		}
	};
}
