#include "functionDraw.h"
#include <math.h>

double yfun(double x) { return 2 * sin(x) - sin(2 * x); }
double xFun(double x) { return 2 * cos(x) - cos(2 * x); }
double xx(double x) { return x * x * x / 3 + x + 1 / 3; }
double yy(double x) { return x * x * x / 3 - x + 1 / 3; }
double y(double x) { return log(x); }

int main() {
	funcDraw test(y, 960, 960);
	test.drawFunction(-1, 1);
	return 0;
}
	
/*********************************************************
 ** ��������1  double fun(double x) { return x; }   
 **            test.drawFunction(5, 10);		    
 ** TODO	   ����unitX��unitY�ļ��㷽ʽ��         
 ** SOLVED
 *********************************************************/

/*********************************************************
 ** ��������2  double fun(double x) { return sin(x) / x; }
 **            test.drawFunction(0, 1, 0, int);
 **            test.drawFunction(0, 2, 0, int);
 **
 **	��������   double fun(double x) { return sin(x) / x; }
 **			   test.drawFunction(0, 5, 0, 5);
 ** TODO	   ����
 ** SOLVED
 *********************************************************/

 /*********************************************************
 ** ��������3  double fun(double x) { return x; }   
 **            test.drawFunction(-5, -10, 0, int);
 ** TODO	   ����
 ** SOLVED
 *********************************************************/

 /*********************************************************
 ** ��������4  double y(double x) { return x * x; }
 **            test.drawPolarFunction(0, 31.4);
 ** TODO	   ����
 *********************************************************/

 /*********************************************************
 ** ��������5  double yy(double x) { return x * x * x / 3 - x + 1 / 3; }
 **			   double y(double x) { return sin(x); }
 **            test.drawFunction(0, 6.28);
 ** TODO	   ����
 *********************************************************/

 /*********************************************************
 ** ��������6  double y(double x) { return log(x); }
 **            test.drawFunction(-1, 1);
 ** TODO	   ����
 *********************************************************/