# Data

Two basic types: primitive (built-in) types and user-defined types. There is no difference between the two except that primitive types are pre-defined. 

## Mixing Numeric Types

C++ issues a warning when a data type is converted to a type with a smaller range. Ex: Float -> Int

Signed numbers are expressed as the bitwise negation + 1. For example -15 is expressed as:

 - `0000 0000 0000 1111` (15)
 - `1111 1111 1111 0000` (bitwise negation)
 - `1111 1111 1111 0001` (+1)
