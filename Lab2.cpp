//#include <iostream>
//using namespace std;
//
//class Rectangle {
//private:
//	int width, height;
//public:
//	void setValues(int, int);
//	int area() { return width * height; }
//	int perimeter() { return 2 *(width + height); }
//};
//
//void Rectangle::setValues(int w, int h){
//	this->width = w;
//	this->height = h;
//}
//
//int main() {
//	Rectangle r;
//	r.setValues(5, 7);
//	cout << "Area: " << r.area() << endl;
//	cout << "Perimeter: " << r.perimeter() << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void passByValue(int x) { x = 10; }
//void passByReferance(int& x) { x = 10; }
//
//int main() {
//	int num = 5;
//	passByValue(num);
//	cout << "After pass by value, num = " << num << endl;
//	passByReferance(num);
//	cout << "After pass by referance, num = " << num << endl;
//							
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Employee {
//	public:
//	int employeeID;
//	string employeeName;
//
//	Employee() {
//		cout << "This is default constructor" << endl;
//	}
//	Employee(int id, string name) {
//		employeeID = id;
//		employeeName = name;
//	}
//	Employee(Employee &){}
//
//	void printDetails() {
//		cout << "Employee ID is " << employeeID << endl;
//		cout << "Employee Name is " << employeeName << endl;
//	}
//
//	~Employee() {
//		cout << "Releasing... " << endl;
//	}
//};
//
//int main() {
//	Employee e(1, "Micheal");
//	e.printDetails();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	virtual void sound() { cout << "This Animal Make Sounds \n"; }
//};
//
//class Dog : public Animal {
//public:
//	void sound() { cout << "The dog barks \n"; }
//};
//
//class Cat : public Animal {
//public:
//	void sound() { cout << "The cat meows \n"; }
//};
//
//int main() {
//	Animal *animal;
//	Dog dog;
//	Cat cat;
//
//	animal = &dog;
//	animal->sound();
//
//	animal = &cat;
//	animal->sound();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//	virtual void draw() {
//		cout << "Drawing a generic shape." << endl;
//	}
//};
//
//class Circle : public Shape {
//public:
//	void draw() {
//		cout << "Drawing a circle." << endl;
//	}
//};
//
//class Square : public Shape {
//public:
//	void draw() {
//		cout << "Drawing a square." << endl;
//	}
//};
//
//int main() {
//	Shape* shape;
//	Circle circle;
//	Square square;
//	
//	shape = &circle;
//	shape->draw();
//
//	shape = &square;
//	shape->draw();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int val) { value = val; }
//
//	friend void printValue(MyClass& obj);
//};
//
//void printValue(MyClass& obj) {
//	cout << "The value of MyClass is " << obj.value << endl;
//}
//
//int main() {
//	MyClass obj1(42);
//	printValue(obj1);
//
//	return 0;
//}