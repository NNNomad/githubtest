#include "Solider.h"

Solider::Solider(std::string name)
{
    this->name=name;
    this->_ptr_gun=nullptr;
}

void Solider::addGun(Gun *ptr_gun)
{
    this->_ptr_gun=ptr_gun;
}
void Solider::addBulletToGun(int n)
{
    this->_ptr_gun->addBullet(n);
}

bool Solider::fire()
{
    return this->_ptr_gun->shoot();
}

Solider::~Solider()
{
    delete this->_ptr_gun;
    this->_ptr_gun=nullptr;
}