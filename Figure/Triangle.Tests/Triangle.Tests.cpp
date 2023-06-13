#include "pch.h"
#include "CppUnitTest.h"
#include "../Triangle/Triangle.h"
#include "../Triangle/HelpMath.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace MiitPoint;


namespace TriangleTests
{
	TEST_CLASS(TriangleTests)
	{
	public:

		TEST_METHOD(Ctor_TriangleIncorrectPoints_ExeptionExpected)
		{
			Assert::ExpectException<std::invalid_argument>([]()
				{auto x = Triangle(Point(1, 1), Point(2, 2), Point(3, 3)); });
		}

		TEST_METHOD(GetSideLen_ValidData_Success)
		{
			double side = MiitPoint::getSideLen(Point(0.0), Point(0, 5));
			double expectedSide = 5;
			Assert::IsTrue(Miit::Math::doubleequal(side, expectedSide));
		}

		TEST_METHOD(GetArea_ValidData_Success)
		{
			Triangle trianlge = Triangle(Point(0, 0), Point(0, 4), Point(4, 0));
			double expectedArea = 8;
			Assert::IsTrue(Miit::Math::doubleequal(trianlge.getArea(), expectedArea, 0.0001));
		}

		TEST_METHOD(GetPerimetr_ValidData_Success)
		{
			Triangle trianlge = Triangle(Point(0, 0), Point(3, 0), Point(0, 4));
			double expectedPerim = 12.0;
			Assert::IsTrue(Miit::Math::doubleequal(trianlge.getPerimetr(), expectedPerim));
		}


	};
}