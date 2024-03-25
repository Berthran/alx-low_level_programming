## Dynamic libraries

* You create a file or files that have functions or codes in them
* Compile those files to create a shared library that can either be Positioned Independent Code (PIC) using the (-fPIC) flag or Position dependent Code. 
```gcc -shared -fPIC -o libmylib.so my_lib.c```
* Create a header file with the function prototypes used in creaeting the shared library. This header file will be included in the program that will use the dynamic library
* Compile a program with this dynamic or shared library and run the program
```gcc -o program program.c -L. -lmylib```

Why create a dynamic library.

I could create a folder, and in that folder, a file that defines different functions. I could also create a header file for all the functions that I create. Now, withing this folder I could compile these files and create and executable that can run.

Imagine that I have another folder and I want to use the functions defined in my former folder within this new folder. It's either, I re-write those functions again in this folder or just copy them and pasted in the folder.
However, with dynamic library, I could create a dynamic library instead of just an executable. Now, the edge is that, this dynamic library can be shared to my current folder, and I can reference functions in my previous folder using the dynamic library.

Another cool advantage of dynamic libraries as opposed to static libraries is that they can be updated. Updating a function and recompiling it to create the dynamic library will update any program that was linked to that dynamic library. This is because with dynamic libraries, dynamic linking is done at run-time not at compile time. So, a program linked to a dynamic library will see the updated change.

To ensure the shared library is found at runtime, the directory where the shared library exists should be added to LD_LIBRARY_PATH env variable. 
To include the pwd you can use
```export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH```


