CFLAGS= -Wall

all: converter calculator

calculator: culc_obj lib_culc
	gcc calculator.c libcalc.a -lm -o calculator $(CFLAGS)

lib_culc: 
	ar -rcs libcalc.a calc.o

culc_obj: 
	gcc -c calc.c $(CFLAGS)

converter: converter_obj lib_converter converter_install
	gcc converter.c -l converter -o converter $(CFLAGS)

converter_install:
	sudo cp libconverter.so /usr/lib
	sudo chmod 0755 /usr/lib/libconverter.so

lib_converter:
	gcc -shared -o libconverter.so uper.o low.o $(CFLAGS)

converter_obj:
	gcc -fpic -c uper.c low.c $(CFLAGS)

clean_all:
	@rm -rf *.o *.a *.so *.h.gch main
	@sudo rm /usr/lib/libconverter.so
