Falling Time

Calculates the approximate time required for an object to fall a given distance under Earth's gravitational acceleration.

Formula

The calculation is based on:

t = √(2d / g)

where:

t = time in seconds
d = distance in metres
g = gravitational acceleration (9.8 m/s²)
Function
int falling_time(int distance);
Behavior

The function:

Calculates the falling time using the distance provided.
Uses 9.8 m/s² as gravitational acceleration.
Rounds the result to the nearest whole second.
Returns -1 for negative distances.
Concepts Demonstrated
Mathematical formulas
math.h
Square roots
Rounding
Input validation
Floating-point calculations
