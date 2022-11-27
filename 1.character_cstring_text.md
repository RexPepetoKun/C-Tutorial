1. Testing Characters
```
    isalpha()
    isalnum
    isdigit
    islower
    isprint
    ispunct
    isupper
    isspace
```
2. Converting characters
```
    tolower
    toupper
```

3. To access C-string library:
```
    #include <cstring>

    strcat()    to concatenate 2 strings
    Syntax:     strcat(str1, str2); // Places str2 into str1.

    strcmp()    to compare. return 0 if true.
    Syntax:     strcmp(str1, str2);

    strcpy()    to copy
    Syntax:     strcpy(str2, str1);//copy str1 into str2

    strlen()    counts length of string inclusive of space
    Syntax:     strlen(str);

```
4. size_t  //need clarity????

```
The datatype size_t is unsigned integral type. It represents the size of any object in bytes and returned by sizeof operator. It is used for array indexing and counting. It can never be negative. The return type of strcspn, strlen functions is size_t.
```
5. string.npos //???

```
static const size_t npos = -1
It is a constant static member value with the highest possible value for an element of type size_t.
It actually means until the end of the string.
This constant is defined with value -1. 
It is used as the value for a length parameter in the string’s member functions.
As a return value, it is usually used to indicate no matches

```
6. Accessing characters ``` [] & at () method ```

7. Substrings
```
   Syntax: object.substr(start_index,length)
```

8. find()  -returns index of substring in string
``` 
   Syntax: string1.find("substring")

         : string1.find("substring",starting index)    //can take 2nd arguement to specify starting index from which to find substring
```
9.  getline() -The function continues accepting inputs and appending them to the string until it        encounters a delimiting character
```
    Necessary for user input in terminal/console.
    On editor, string "Julius Caesar" declared will return entire string when cout executed.
    However, if string is declared as empty variable on editor and require user input on console,any   character after whitespace will be ignored.

    Example of usage:
    string my_name; //declare variable my_name as string object
    cin>>my_name;  //prompts user to keyin name. Example, Julius Caesar.
    Below are 2 possible outcomes:
    cout<<my_name; //output will only be Julius
    getline(cin.my_name); //output will be Julius Caesar

```

10. 
```
string.erase(start_index,length of character)
string.insert(length,character to be added)  //character can be string,whitespace,etc...
string.swap(a,b)

```
11. 






