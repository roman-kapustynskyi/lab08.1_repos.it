
#include "pch.h"
#include "CppUnitTest.h"
#include"../PR08.1 it/FileName.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod_Count)
        {
            char str[] = "OGO_test_AGA_test_OGO";

            int count = Count(str);

            Assert::AreEqual(3, count);
        }

        TEST_METHOD(TestMethod_Change)
        {
            char str[100] = "OGO123AGA";

            char* result = Change(str);

            Assert::AreEqual("**123**", str);
            Assert::AreEqual("**123**", result);
        }
    };
}