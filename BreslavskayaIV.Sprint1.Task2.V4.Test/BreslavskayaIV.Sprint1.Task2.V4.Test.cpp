#include "pch.h"
#include "CppUnitTest.h"
#include "../BreslavskayaIV.Sprint1.Task2.V4.Lib/BreslavskayaIV.Sprint1.Task2.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint1Task0Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint1Task0Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* date = new Service0();
			int a = 153;
			int s;
			s = date->Logic(a);
			Assert::AreEqual(1, s);
		}
	};
}
