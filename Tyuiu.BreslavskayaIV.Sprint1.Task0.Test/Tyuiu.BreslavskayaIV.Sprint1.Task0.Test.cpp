#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint1.Task0.Lib/Tyuiu.BreslavskayaIV.Sprint1.Task0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint1Task0Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint1Task0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V00* date = new Service0();
			int a = 1;
			int b = 1;
			int s;
			s = date->Calculate(a, b);
			Assert::AreEqual(1, s);
		}
	};
}
