1. Function Prototype :
```
    -includes a return type indicating the type of variable that the function will return. 
    -includes function name, which should describe what the function does. 
    -The prototype also contains the variable types of the arguments (arg type) that will be passed to the function. 
    -Optionally, it can contain the names of the variables that will be passed. 
    -A prototype should always end with a semicolon.

    Syntax:
    returnType functionName(dataType1, dataType2, ...)

    Example:
    double square( double );
    void print_line( int , char );
    int menu_choice( void );
    int sum(int, int )
    
```
2. Calling the function :
```
    -Calling or invoking the function locates the function in the memory, furnishing it with arguments and causing it to execute. 
    -When called control is passed to the function where it is actually defined. 
    -The actually statements are executed and control passed again to the calling program.

    Syntax:
    variable = function_name(arg1,arg2,etc...);

    Example:
    result = square(number1);
    result = sum(numb1,numb2);

```
3. Defining the function:
```
    -The definition contains the code that will be executed.
    -The first line of a function definition, called the function header, should be identical to the function prototype, with the exception of the semicolon.
    -A function header shouldn't end with a semicolon.
    -In addition, although the argument variable names were optional in the prototype, they must be included in the function header. -Following the header is the function body, containing the statements that the function will perform. The function body should start with an opening bracket and end with a closing bracket. If the function return type is anything other than void, a return statement should be included, returning a value matching the return type. If the function does not returns any value the keyword void is used as return type


