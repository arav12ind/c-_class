cpp="g++"
cfl="-c"
ofl="-o"
factorial: factorial_func.o factorial.o
	${cpp} ${ofl} $@ $^
factorial_func.o: factorial_func.cpp
	${cpp} ${cfl} $<
factorial.o: factorial.cpp
	${cpp} ${cfl} $<
clean:
	rm *.o
