// Tyuiu.BreslavskayaIV.Sprint1.Task3.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service3 : public ISprint0Task3V0
{
	virtual int Uslovie(int a) override
	{
		int s;
		s = a;
		if ((s > 1000) && (s % 4 == 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};