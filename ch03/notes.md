# Operators

Data form the simplest expressions, the use of operators creates larger expressions. Terminating assignment with a semicolon turns it into a statement. To create complex expressions, one must understand:

 - Precedence: which operators have priority over others. Ex: `*` has precedence over `+`.
 - Associativity: what happens when there are two or more operators at the same level of precedence. Ex: `5 - 5 - 5` is the same as `(5 - 5) - 5` an not `5 - (5 - 5)`.



## Modifier Precedence:

 1. Scope operator 
 2. Data access modifiers
 3. Prefix operators
 4. Pointer to member 
 5. Multiplication and Division
 6. Addition and Subtraction
 7. Shift operators
 8. Less than / Greater than.
 9. Test for Equality
 10. Bitwise and Logical conjunctions
 11. Conditional operator
 12. Assignment operator
 13. `throw` operator
 14. Join operator (`,`)


## Details

 - The scope operator `::` has the highest precedence
 - Postfix operators `lavalue++`, `lavalue--` first pass on the current value then increment / decrement
    - Postfix operator is slightly inefficient as it creates a copy of the thing being incremented.
 - Prefix modifiers associate R -> L ex: `++lvalue` increments first, `&lvlaue`, the address operator takes the address of an item from memory
 - Assignment operator associates R -> L, ex: `++(bigger = big = 100)` results in `bigger = 101` and `big = 100`.
 - `throw` raises an exception
 - join operator combines multiple operations, ex: `while(cin >> n, n > 0)`

 
## Cast operators

 - `static_cast`
    - produce value of an expression in the new data format.
    - commonly used to suppress warnings and provide clarification
 - `reinterpret_cast`
    - casts from one pointer (address) expression to another
    - i.e. leaves the data at the address given unchanged and interprets that data as the given cast type.
    - used to cast `void*` pointer to more specific type and for reading or writing binary data.
 - `const_cast`
    - adds or removes `const` or `volatile` attributes 
 - `dynamic_cast`
 - C-language cast
    - syntax for old C-language cast.
    - easier to use than other casts, but casts should be self-documenting.

