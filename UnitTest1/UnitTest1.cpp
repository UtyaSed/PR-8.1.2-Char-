#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 8.1.2(Char)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
					TEST_METHOD(TestMethod1)
					{
						std::string s;
						s = "rrwhilerr";
						Change(s);

						Assert::AreEqual(s[3], '*');
					}
	};
}
