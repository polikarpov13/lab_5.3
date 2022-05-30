#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/5/lab_5.3/lab_5.3/lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			A a;
			a.setX(10);

			Assert::AreEqual(10, a.getX());
		}
	};
}
