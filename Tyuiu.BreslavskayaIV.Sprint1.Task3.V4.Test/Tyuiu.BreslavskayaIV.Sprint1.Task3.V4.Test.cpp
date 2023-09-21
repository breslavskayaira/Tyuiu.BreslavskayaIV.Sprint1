#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint1.Task3.V4.Lib/Tyuiu.BreslavskayaIV.Sprint1.Task3.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint1Task3V4Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint1Task3V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3V0* date = new Service3();
			int a = 2000;
			int s;
			s = date->Uslovie(a);
			Assert::AreEqual(1, s);
		}
	};
}
