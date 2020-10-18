powers:	main.o	powers.o
	g++ -o $@ $^
main.o:	main.cpp	powers.h
	g++ -c $<
powers.o:	powers.cpp	powers.h
	g++ -c $<
clean:
	rm *.o
