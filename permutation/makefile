permutation:	permutation.o	main.o factorial_func.o
	g++ -o $@ $^
main.o:	main.cpp	permutation.h
	g++ -c $<
permutation.o:	permutation.cpp	permutation.h
	g++ -c $<
factorial_func.o:	factorial_func.cpp	permutation.h
	g++ -c $<
clean:
	rm *.o

