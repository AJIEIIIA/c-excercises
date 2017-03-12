#ifndef VECTOR2D
#define VECTOR2D
#include <ostream>
#include <cstring>

namespace homework05
{
using namespace std::literals;

class Vector2D
{
public:
    Vector2D(double x, double y);
    Vector2D() = delete;
    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);
    double GetR() const;
    double GetPhi() const;

    Vector2D operator + (const Vector2D& v);

    Vector2D operator - (const Vector2D& v);

    Vector2D operator -();

    Vector2D operator += (const Vector2D& v);

    Vector2D operator -= (const Vector2D& v);

    bool operator == (const Vector2D& v);

    bool operator != (const Vector2D& v);
private:
    double x, y;

};

std::ostream& operator << (std::ostream& stream, const Vector2D& v);

Vector2D operator "" _x(long double value);
Vector2D operator "" _y(long double value);

Vector2D operator "" _phi(long double value);
Vector2D operator * (double r, const Vector2D& v);


}
#endif // VECTOR2D

