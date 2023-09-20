// BreslavskayaIV.Sprint1.Task2.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service0 : public ISprint1Task1
{
	virtual int Logic(int a) override
	{
		int s;
		s = (a%10) % 3;
		if (s == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
