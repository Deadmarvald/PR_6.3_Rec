#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.3Rec/Lab_06_3_Rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT63Rec
{
	TEST_CLASS(UT63Rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 3;
			int a[k] = { 3,1,2 };
			t = Perev1(a, k, 1);
			Assert::AreEqual(t, 0);
		}
	};
}
