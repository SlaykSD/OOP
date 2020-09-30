#include <math.h>

namespace Chain_Line
{
	struct Point {
		double x, y;
		Point(double x0 = 0, double y0 = 0) : x(x0), y(y0) {}
	};
	class  CH_Line
	{
	public:

		CH_Line(double ad = 1);
		CH_Line(const double x1, const double x2, double ad = 1);
		CH_Line& setPoints(const double x1, const double x2);
		CH_Line& setHeight(double a);
		CH_Line& setX1(const double x1);
		CH_Line& setX2(const double x2);
		double getX1() const { return x1; }
		double getX2() const { return x2; }
		Point getP1() const { return p1; }
		Point getP2() const { return p2; }
		double getHeight() const { return a; }
		void correct(const Point& p1, const Point& p2);
		double f(double x) const;
		double L(double l)const;
		double L2()const;
		double R(double x)const;
		Point& Center_Curvature(double x) const;
		double Integral()const;

	private:
		double x1;
		double x2;
		Point p1;
		Point p2;
		double a;
		double ch(double)const;
		double sh(double)const;

	};
}