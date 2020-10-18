volume:	cube_vol.o cyl_vol.o rect_vol.o main.o
	g++ -o $@ $^
cube_vol.o:	cube_vol.cpp volume.h
	g++ -c $<
cyl_vol.o:	cyl_vol.cpp volume.h
	g++ -c $<
rect_vol.o:	rect_vol.cpp volume.h
	g++ -c $<
main.o:	main.cpp	volume.h
	g++ -c $<
clean:
	rm *.o
