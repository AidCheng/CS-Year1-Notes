# Important Definitions from OOP

- Typing
  - Strong Typing *(describe the strictness and flexibility in type rules)*:
    - The type of a var is checked at compile time and type errors are caught before the program runs
  - Weak Typing *(describe the strictness and flexibility in type rules)*:
    - More permissive comparing to *Strong typing*
    - Vars can be implicitly *converted* to other types, and type errors may not be caught until *runtime*
  - Static Typing *(determined time when the type check is performed)*:
    - The type of a variable is *known* at compile time and cannot change during execution of the program
  - Dynamic Typing *(determined time when the type check is performed)*:
    - Allows variable to change their type during runtime
    - Type checking occurs at runtime

- Recursion (pros and cons)
  - Advantages
    - Allows certain complicate function to be expressed in a more *concise and succinct* code
    - Simplify the solution by *breaking down* the problem into smaller subproblems
    - Improved Readability
  - Disadvantages
    - Potentially lead to a higher risk of stack ovf
    - Recursive calls typically incur higher performance cost comparing to imperative functions
    - Difficulty in understanding, can be harder to understand to other programmers.

- Polymorphism
  - Describe the ability of a single function that can be applied to multiple types (generic method/class)
  - enabling *flexibility and extensibility* in programming

- Object-Oriented
  - A programming paradigm that organises software design centring objects, which contains it's own attributes and behabiours

- Class
  - A blueprint for a range of objects that holds the same of very close attributes and behaviours

- Object
  - An instance of a class that encapsulates the *data and behaviours*

- Encapsulation
  - The bundling of a collection of data and methods operating on that data into a single unit

- Inheritance
  - The mechanism in Java where a subclass can inherit properties and behaviours from another superclass

- Overriding
  - The ability of subclass to implement a more specific method that already has a generic implementation in its superclass

- Overloading
  - The ability of allowing two or more methods with the same name and different parameter list to be defined in the same scope of a class

- Java Reference v. C / C++ pointers
  - A reference is an abstract handle that refers to an object's location in the memory which doesn't expose the memory address directly.
  - A pointer hold the memory address of the object they point to, which allows direct manipulation of memory
  - Why Use *Reference*?
    - By abstracting away direct memory manipulation, it is easier to write safe and reliable code in Java
    - Reference also enable Java's garbage collection to automatically manages memory by reclaiming unused object
  - Memory management in Java
    - Java employs automatic management *through garbage collection*
      - when object is no longer referenced, it becomes eligible for garbage collection
      - The JVM *periodically* runs a garbage collector to identify and remove unreachable objects
      - Reduce the risk from memory leak and segmentation faults.
  
- Dynamic Binding
  - A mechanism that the method or function that gets called upon an object is determined at runtime.

- Pass-by-value
  - In PBV, the copy of actual value (not the variable itself) is passed to the function

- Pass-by-reference
  - A refernce to the actual variable is passed to the function

- Binding
  - The association between a name and the entity it represent

- Coupling
  - the degree of dependency between two part of the system

- Decoupling
  - reducing the dependencies between two part of the system

- static final variable
  - A variable that is immutable and belongs to the class instead of the object

- Cohesion
  - The degree which the elements within a module are related to each other

- Cohesive function
  - The function performs a single, well-defined takes or responsibility