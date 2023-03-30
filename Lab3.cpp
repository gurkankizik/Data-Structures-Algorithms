//#include <iostream>
//using namespace std;
//
//class Polygon {
//private:
//	int numOfEdge, length;
//
//public:
//	//Polygon();
//	void setNumOfEdge(int numOfEdge) { if(numOfEdge > 3) this -> numOfEdge = numOfEdge; }
//	int getNumOfEdge() { return numOfEdge; }
//	void setLength(int length) { this -> length = length; }
//	int getLength() { return length; }
//	int Perimeter() { return numOfEdge * length; }
//	int CalculateInternalAngle(){ return (numOfEdge - 2) * 180; }
//};
//
//int main() {
//	Polygon p;
//	p.setNumOfEdge(5);
//	p.setLength(5);
//	cout << "Num Of Edges: " << p.getNumOfEdge() << endl;	
//	cout << "Num Of Edges: " << p.getLength() << endl;
//	cout << "Perimeter: " << p.Perimeter() << endl;
//	cout << "Angle: " << p.CalculateInternalAngle() << endl;
//
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//	virtual void draw() = 0;
//};
//
//class Rectangle : public Shape {
//public:
//	void draw() {
//		cout << "Drawing a rectangle" << endl;
//	}
//};
//
//class Circle : public Shape {
//public:
//	void draw() {
//		cout << "Drawing a circle" << endl;
//	}
//};
//
//int main() {
//	Shape* shape1 = new Rectangle();
//	Shape* shape2 = new Circle();
//
//	Rectangle* rect = dynamic_cast<Rectangle*>(shape1);
//	if (rect) {
//		cout << "Shape 1 is a rectangle" << endl;
//		rect->draw();
//	}
//	else {
//		cout << "Shape1 is not a rectangle" << endl;
//	}
//
//	Circle* circle = dynamic_cast<Circle*>(shape2);
//	if (circle) {
//		cout << "Shape2 is a circle" << endl;
//		circle->draw();
//	}
//	else {
//		cout << "Shape2 is not a circle" << endl;
//	}
//}