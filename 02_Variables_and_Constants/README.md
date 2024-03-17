# Variables and Constant
## C Variables
### What is a variable in C?
  A variable in C is a memory location with some name that helps store some form of data and retrieves it when required. We can store different types of data in the variable and reuse the same variable for storing some other data any number of times.

> They can be viewed as the names given to the memory location so that we can refer to it without having to memorize address. The size of the variable depends upon the data type it stores.
### C Variable Syntax
    
```c
     // defining single variable
     data_type variable_name = value;
     // defining multiple variable
     data_type variable_name1, variable_name2;

     // Example
     int i;
     char c;
     double pi;
```

- C Variable Declaration
  Variable declaration in C tells the compiler about the existence of the variable with the given name and data type. When the variable is declared compiler automatically allocates the memory for it.

   ```c
     extern int a;
   ```     

- C Variable Definition
  In the definition of a C variable, the compiler allocates some memory and some value to it. A defined variable will contain some random garbage value till it is not initialized.

   ```c
     int i;
     char c;
   ```
 
- C Variable Initialization
  Initialization of a variable is the process where the user assigns some meaningful value to the variable.

   ```c
     int i;
     i = 10;
        
     int i = 10;
   ``` 

### C Variable Types
  The C variable can be classified into the following types:
   1. Local Variable
      A Local variable in C is a variable that is declared inside a function or a block of code. Its scope is limited to the block or function in which it is declared.

      ```c
        #include <stdio.h>
        
        void function() {
            int x = 10; // local variable
            print("%d", x);
        }
           
        int main() {
            function();
            return 0;
        }
      ```

   2. Global Variable
      A Global variable in C is a variable that is declared outside the function or a block of code. We can access the global variable anywhere in the C program after it is declared.
   
      ```c
        # include <stdio.h>
     
        int x = 20; // global variable
     
        void function1() {
            printf("Function 1: %d\n", x);
        }
     
        void function2() {
            printf("Function 2: %d\n", x);
        }
      ```
     
      > **Note:** When we have same name for local and global variable, local variable will be given preference over the global variable by the compiler.
     
      ```c
        #include <stdio.h>
       
        int x = 50;
     
        int main() {
            int x = 10;
            {
                extern int x;
                printf("Value of global x is %d\n", x);
            }
           
            printf("Value of local x is %d\n", x);
            return 0;
        }
      ```

   3. Static Variable
      A static variable in C is a variable that is defined using the static keyword. It can be defined only once in a C program and its scope depends upon the region where it is declared (can be global or local).
     
      The default value of static variable is zero. 
      ```c
        static data_type variable_name = initial_value;
      ```
      
   4. Automatic Variable
      All the local variables are automatic variables by default. They are also known as auto variables.

      Their scope is local and their lifetime is till the end of the block. If we need, we can use the auto keyword to define the auto variables.

      The default value of the auto variables is a garbage value.

      ```c
        auto data_type variable_name;
        data_type variable_name;
      ```
      
   5. Extern Variable
      External variables in C can be shared between multiple C files. We can declare an external variable using the extern keyword.
   
      Their scope is global and they exist between multiple C files.

      ```c
        extern data_type variable_name;
      ```

   6. Register Variable
      Register variables in C are those variables that are stored in the CPU register instead of the conventional storage place like RAM. Their scope is local and exists till the end of the block or a function.
      <br/>
      These variables are declared using the register keyword.
      <br/>
      The default value of register variables is a garbage value.

      ```c
        register data_type variable_name = initial_value;
      ```

4. Constant Variable in C
   Till now we have only seen the variables whose values can be modified any number of times. But C language also provides us a way to make the value of a variable immutable. We can do that by defining the variable as constant.

   A constant variable in C is a read-only variable whose value cannot be modified once it is defined. We can declare a constant variable using the const keyword.

   ```c
     const data_type variable_name = value;
   ```

   > **Note:** We have to always initialize the const variable at the definition as we cannot modify its value after defining.