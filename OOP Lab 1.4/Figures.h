#pragma once

class Circle {
	private:
		double R = 0;
		double x = 0;
		double y = 0;
	public:
		double getR() const { return R; };
		void setR(double value);
		void move(double dx, double dy);
		void resize(double scale);
		double S() const;
		void Read();
		void Display() const;
		bool Init(double value);
		void CheckFunctions();
		double getX() const { return x; };
		double getY() const { return y; };
};

class Square {
	private:
		int side;
		double x = 0;
		double y = 0;
	public:
		int getSide() const { return side;};
		void setSide(int value) { side = value; };
		void move(double dx, double dy);
		void resize(double scale);
		double S() const;
		void Read();
		void Display() const;
		bool Init(double value);
		void CheckFunctions();
		double getX() const { return x; };
		double getY() const { return y; };
};

class Rectangle {
private:
	int side1 = 0;
	int side2 = 0;
	double x = 0;
	double y = 0;
public:
	int getSide1() const { return side1; };
	int getSide2() const { return side2; };
	void setSide1(int value) { side1 = value; };
	void setSide2(int value) { side2 = value; };
	void move(double dx, double dy);
	void resize(double scale, double scale2);
	double S() const;
	void Read();
	void Display() const;
	bool Init(double value);
	void CheckFunctions();
	double getX() const { return x; };
	double getY() const { return y; };
};