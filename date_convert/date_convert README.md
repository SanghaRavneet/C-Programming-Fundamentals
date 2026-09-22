Date Convert

Converts a date represented as an integer from DDMMYYYY format to YYYYMMDD format.

Example
Input:  25092026
Output: 20260925
Function
int date_convert(int date_number);
Behavior

The function:

Extracts the year, month, and day from the input integer.
Validates that the month is between 1 and 12.
Validates that the day is between 1 and 31.
Reconstructs the date in YYYYMMDD format.
Returns -1 when an invalid month or day is provided.
Concepts Demonstrated
Integer division
Modulo arithmetic
Input validation
Functions
Header files
Error handling
