#include <iostream>
#include "Object.h"

using namespace std;

Number::Number() {

}

Number::Number(int num) {
    this->num = num;
}

Number::~Number() {

}

Object* Number::multiply(const Object* other) const {
    const type_info& t = typeid(*other);
	if(t.name() == typeid(*this).name()){
		Number* output = new Number(this->num * dynamic_cast<const Number*> (other)->num);
		return output;
	}
	const Coord3D* c = dynamic_cast<const Coord3D*> (other);
	Coord3D* output = new Coord3D(c->x * this->num, c->y * this->num,  c->z * this->num);
	return output;
}

void Number::print() {
    cout << "num = " << this->num << endl;
}