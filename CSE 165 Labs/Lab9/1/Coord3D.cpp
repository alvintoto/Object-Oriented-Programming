#include <iostream>
#include "Object.h"

using namespace std;

Coord3D::Coord3D() {

}

Coord3D::Coord3D(int x1, int y1, int z1) {
    this->x = x1;
    this->y = y1;
    this->z = z1;
}

Coord3D::~Coord3D() {

}

Object* Coord3D::multiply(const Object* other) const {
    const type_info& t = typeid(*other);
	if(typeid(*this).name() == t.name()){
		const Coord3D* coord = dynamic_cast<const Coord3D*>(other);
		Coord3D* output = new Coord3D(coord->x * this->x, coord->y * this->y, coord->z * this->z);
		return output;
	}
	const Number* n = dynamic_cast<const Number*>(other);
	Coord3D* output = new Coord3D(n->num * this->x, n->num * this->y, n->num * this->z);
	return output;
}

void Coord3D::print() {
    cout << "x = " << this->x; 
    cout << ", y = " << this->y;
    cout << ", z = " << this->z << endl;
}