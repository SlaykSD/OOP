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
		Point p1;
		Point p2;
		double a;
		double ch(double)const;
		double sh(double)const;

	};
	int dialog_set(CH_Line&);
	int dialog_info(CH_Line& );
	int dialog_function(CH_Line&);
	int dialog_lenght(CH_Line&);
	int dialog_radius(CH_Line&);
	int dialog_center(CH_Line&);
	int dialog_integral(CH_Line&);
	int dialog(const char*[], int);
	int getN_Int(int* a);
	int getDouble(double* a);
}