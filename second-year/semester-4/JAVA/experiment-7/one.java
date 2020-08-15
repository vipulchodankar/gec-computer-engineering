import java.util.*;

class Shape {
	float l, b;

	void getL(int L) {
		l = L;
	}

	void getL(float L) {
		l = L;
	}

	void getB(int B) {
		b = B;
	}

	void getB(float B) {
		b = B;
	}

	float area() {
		return l * b;
	}
}

class Test1 extends Shape {
	float h;
	boolean twoDim = false;

	Test1() {
		l = 0;
		h = 0;
		b = 0;
	}

	Test1(float L, float B) {
		l = L;
		b = B;
		h = 0;
		twoDim = true;
	}

	Test1(float L, float B, float H) {
		l = L;
		b = B;
		h = H;
	}

	float area() {
		if (twoDim) {
			return l * b;
		}
		return l * b * h;
	}

}

public class one {
	public static void main(String[] args) {
		int l = 0, b = 0, h = 0;
		Test1 obj1 = new Test1();
		Test1 obj2 = new Test1(l, b, h);
		Test1 obj3 = new Test1(l, h);
	}
}
