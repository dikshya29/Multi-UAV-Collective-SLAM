#ifndef WB_VECTOR3_HPP
#define WB_VECTOR3_HPP

#include <math.h>

class WbVector3 {
public:
  WbVector3()                                                : mX(0.0), mY(0.0), mZ(0.0) {}
  WbVector3(double x, double y, double z)                    : mX(x), mY(y), mZ(z) {}
  WbVector3(const WbVector3 &other)                          : mX(other.mX), mY(other.mY), mZ(other.mZ) {}
  WbVector3(const double v[3])                               : mX(v[0]), mY(v[1]), mZ(v[2]) {}
  WbVector3(const float v[3])                                : mX(v[0]), mY(v[1]), mZ(v[2]) {}
  
  const double * ptr() const                                 { return &mX; }

  double x() const                                           { return mX; }
  double y() const                                           { return mY; }
  double z() const                                           { return mZ; }
  
  double &operator [] (int index)                            { return *(&mX + index); }
  double operator [] (int index) const                       { return *(&mX + index); }

  void setX(double x)                                        { mX = x; }
  void setY(double y)                                        { mY = y; }
  void setZ(double z)                                        { mZ = z; }
  
  void setXyz(double x, double y, double z)                  { mX = x; mY = y; mZ = z; }
  void setXyz(const double v[3])                             { mX = v[0]; mY = v[1]; mZ = v[2]; }
  void setXyz(const float v[3])                              { mX = v[0]; mY = v[1]; mZ = v[2]; }

  const WbVector3 &operator + () const                       { return *this; }
  WbVector3 operator - () const                              { return WbVector3(-mX, -mY, -mZ); }

  WbVector3 operator + (const WbVector3 &v) const            { return WbVector3(mX + v.mX, mY + v.mY, mZ + v.mZ); }
  WbVector3 operator - (const WbVector3 &v) const            { return WbVector3(mX - v.mX, mY - v.mY, mZ - v.mZ); }
  WbVector3 operator * (double d) const                      { return WbVector3(mX * d, mY * d, mZ * d); }
  WbVector3 operator / (double d) const                      { double inv = 1.0 / d; return WbVector3(mX * inv, mY * inv, mZ * inv); }
  friend WbVector3 operator * (double d, const WbVector3 &v) { return WbVector3(d * v.mX, d * v.mY, d * v.mZ); }

  WbVector3 &operator = (const WbVector3 &v)                 { mX = v.mX; mY = v.mY; mZ = v.mZ; return *this; }
  WbVector3 &operator += (const WbVector3 &v)                { mX += v.mX; mY += v.mY; mZ += v.mZ; return *this; }
  WbVector3 &operator -= (const WbVector3 &v)                { mX -= v.mX; mY -= v.mY; mZ -= v.mZ; return *this; }
  WbVector3 &operator *= (const WbVector3 &v)                { mX *= v.mX; mY *= v.mY; mZ *= v.mZ; return *this; }
  WbVector3 &operator *= (double d)                          { mX *= d; mY *= d; mZ *= d; return *this; }
  WbVector3 &operator /= (double d)                          { double inv = 1.0 / d; mX *= inv; mY *= inv; mZ *= inv; return *this; }
  
  double length() const                                      { return sqrt(mX * mX + mY * mY + mZ * mZ); }
  double length2() const                                     { return mX * mX + mY * mY + mZ * mZ; }
  double distance(const WbVector3 &v) const                  { return (*this - v).length(); }
  double distance2(const WbVector3 &v) const                 { return (*this - v).length2(); }
  
  void normalize()                                           { *this /= length(); }
  WbVector3 normalized() const                               { return *this / length(); }

  double dot(const WbVector3 &v) const                       { return mX * v.mX + mY * v.mY + mZ * v.mZ; }
  WbVector3 cross(const WbVector3 &v) const                  { return WbVector3(mY * v.mZ - mZ * v.mY, mZ * v.mX - mX * v.mZ, mX * v.mY - mY * v.mX); }
  
  double angle(const WbVector3 &v) const                     { double s = sqrt(length2() * v.length2()); return acos(dot(v) / s); }

  bool operator == (const WbVector3 &v) const                { return mX == v.mX && mY == v.mY && mZ == v.mZ; }
  bool operator != (const WbVector3 &v) const                { return mX != v.mX || mY != v.mY || mZ != v.mZ; }
  
  bool isNull() const                                        { return mX == 0.0 && mY == 0.0 && mZ == 0.0; }

private:
  double mX, mY, mZ;
};

#endif
