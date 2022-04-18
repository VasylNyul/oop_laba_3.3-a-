#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_3.3(a)/Private.h"
#include "C:\Users\apple\source\repos\oop_laba_3.3(a)\oop_laba_3.3(a)\Fraction.h"
#include "C:\Users\apple\source\repos\oop_laba_3.3(a)\oop_laba_3.3(a)\Fraction.cpp"
#include "C:\Users\apple\source\repos\oop_laba_3.3(a)\oop_laba_3.3(a)\Private.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest33a
{
	TEST_CLASS(oopUnitTest33a)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Private a(3, 6), b(1, 2);
			Private c = a - b;
			Assert::AreEqual(c.get_a(), 2);
			Assert::AreEqual(c.get_b(), 4);
		}
	};
}
