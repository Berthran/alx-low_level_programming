# What is printed when typing 'make'
default:
	@echo \'make Lib\' to create the shared lib libFct.so
	@echo \'make Prog\' to create exec 'prog' #(standalone)
	@echo \'make ByLib\' to create call_dynamic, using shared lib
	@echo \'make Clean\' to remove all .o, exec call, call_dynamic and libFct.so



# 'make Lib': Create the shared library (need Position Indep Code)
Lib: fct.c
	gcc -fPIC -c fct.c
	gcc -shared -o libFct.so fct.o

# 'make ByLib': Create exec 'call_dynamic' with shared lib (not contained)
# in shell or in ~/.bashrc: export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH
ByLib: call_fct.c libFct.so
	gcc -c call_fct.c
	gcc -o call_dynamic call_fct.o -L./ -lFct

# 'make Prog': Create a standalone 'prog' containing fct.o: './prog' to run
# This does not use the shared lib
Call: call_fct.c fct.c
	gcc -c fct.c
	gcc -c call_fct.c
	gcc -o prog fct.o call_fct.o

# 'make Clean': remove exec, .o and .so
Clean:
	rm *.o libFct.so call_dynamic prog
