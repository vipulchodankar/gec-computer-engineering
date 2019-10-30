#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int c3dc(int a,int r) {
	return(r*cos(a));
}

int c3ds(int a,int r) {
	return(r*sin(a));
}

int cpa(int a,int b) {
	return(atan(b/a));
}

int cpr(int a,int b) {
	return(sqrt(a*a+b*b));
}

class POLAR{
	float angle;
	float radius;
	
	POLAR(float a=0,float r=0) {
		angle=a;
		radius=r;
	}
	
	float get_angle(){
		return angle;
	}
	
	float get_radius(){
		return radius;
	}
		
	operator RECTANGLE() {
		int x1,y1;
		x1=c3dc(angle,radius);
		y1=c3ds(angle,radius);
		return RECTANGLE(x1, y1);
	}
};

class RECTANGLE{
	float x;
	float y;
	
	RECTANGLE(float a=0,float b=0) {
		x=a;
		y=b;
	}

	RECTANGLE(POLAR a) {
		float i,j;
		i=a.get_angle();
		j=a.get_radius();
	}
};