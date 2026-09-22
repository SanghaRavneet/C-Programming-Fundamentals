Mow Lawn

Calculates the approximate time required to mow a rectangular lawn based on its dimensions and mowing speed.

Function
int mow_lawn(double width, double length, double speed);
Calculation

The program calculates the lawn's area and determines the time required based on the specified mowing speed.

Area = width × length

The result is converted to minutes and rounded to the nearest whole minute.

Validation

The function returns -1 when:

Width is less than or equal to zero.
Length is less than or equal to zero.
Speed is less than or equal to zero.
Concepts Demonstrated
Floating-point arithmetic
Area calculations
Unit conversion
Input validation
Error handling
Rounding
