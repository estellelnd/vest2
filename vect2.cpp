#include "vect2.hpp"

vect2::vect2()
{
	v[0] = 0;
	v[1] = 0;
}
vect2::vect2(int x, int y)
{
	v[0] = x;
	v[1] = y;
}

int &vect2::operator[](int i)
{
	return (v[i]);
}

int vect2::operator[](int i) const
{
	return (v[i]);
}

vect2 &vect2::operator+=(const vect2 &o)
{
	v[0] += o.v[0];
	v[1] += o.v[1];
	return (*this);
}
vect2 &vect2::operator-=(const vect2 &o)
{
	v[0] -= o.v[0];
	v[1] -= o.v[1];
	return (*this);
}
vect2 &vect2::operator*=(int n)
{
	v[0] *= n;
	v[1] *= n;
	return (*this);
}

vect2 vect2::operator+(const vect2 &o) const
{
	vect2 r(*this);
	return (r += o);
}
vect2 vect2::operator-(const vect2 &o) const
{
	vect2 r(*this);
	return (r -= o);
}
vect2 vect2::operator*(int n) const
{
	vect2 r(*this);
	return (r *= n);
}
vect2 vect2::operator-() const
{
	return (vect2(-v[0], -v[1]));
}

vect2 &vect2::operator++()
{
	v[0]++;
	v[1]++;
	return (*this);
}
vect2 &vect2::operator--()
{
	v[0]--;
	v[1]--;
	return (*this);
}
vect2 vect2::operator++(int)
{
	vect2 old(*this);
	++*this;
	return (old);
}
vect2 vect2::operator--(int)
{
	vect2 old(*this);
	--*this;
	return (old);
}

bool vect2::operator==(const vect2 &o) const
{
	return (v[0] == o.v[0] && v[1] == o.v[1]);
}
bool vect2::operator!=(const vect2 &o) const
{
	return (!(*this == o));
}

vect2 operator*(int n, const vect2 &v)
{
	return (v * n);
}

std::ostream &operator<<(std::ostream &os, const vect2 &v)
{
	return os << "{" << v[0] << ", " << v[1] << "}";
}
