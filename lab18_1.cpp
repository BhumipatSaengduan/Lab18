#include <iostream>
#include <cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B) {
	double ovl_w , ovl_h, area;
	ovl_w = min((A.x + A.w),(B.x + B.w)) - max(A.x, B.x);
	ovl_h = min(A.y, B.y) - max((A.y - A.h), (B.y - B.h));
	area = ovl_w * ovl_h;
	if (area <= 0) return 0;
	else return area ;
} 