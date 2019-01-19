


/*
Exercises:
1.
a) It allows someone reading your code to easily figure out where the
definition for each function/macro/type is. In general, a C project
with headers and multiple source files is more navigable.
b) You have more files to keep track of and to have open simultaneously.

2.
b) Function definitions should not go in the header file, because if 
multiple source files include that header, they will each receive 
copies of the definition, resulting in multiple copies
of object code for a single function, which causes the linker to fail
This is the same reason why you shouldn't include a source file.
You can, however, have many declarations referring to the same, singular
definition of a function, which is what happens when many files
include a header.

3.
Possibly, yes. Since most preprocessors handle #include "file" 
by searching the current directory before the system directories, 
a header file in your project with the same name as a system 
header could be included instead of the desired system header.

4.
a)
output: Output if DEBUG is defined:\nValue of i: 1\n
Value of j: 2\nValue of k: 3\nValue of i + j: 3\n
Value of 2 * i + j - k: 1\n

b) 
output: Output if DEBUG is not defined:\n

c) The DEBUG macro is either defined or not before the inclusion
of debug.h, causing the PRINT_DEBUG(n) macro to either be
replaced by a printf statement, or by nothing.

d) Yes, DEBUG must be defined before debug.h is included. If it's
not, the preprocessor will include debug.h first, then always
define PRINT_DEBUG(n) as nothing because DEBUG has not been defined
yet.

6.
a) main.c, f1.c, and f2.c all need to be compiled, which also
would compile f1.h and f2.h
b) only f1.c needs to be recompiled.
c) f1.c, main.c, and f2.c would need to be recompiled.
d) f1.c and f2.c would need to be recompiled



*/