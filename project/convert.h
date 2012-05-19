#ifndef CONVERT_H
#define CONVERT_H

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>

#define scale 32.0f
#define pi 3.141592f

#define toMet(X) ( (X)/scale )
#define toPix(X) ( (X)*scale )

#define toRad(X) ( pi*(X)/180.0f )
#define toDeg(X) ( 180.0f*(X)/pi )

#define toVector2f(X) ( Vector2f(toPix(X.x), toPix(X.y)) )
#define tob2Vec2(X) ( b2Vec2(toMet(X.x), toMet(X.y)) )

#endif