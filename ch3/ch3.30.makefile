# make -f ch3.30.makefile all
CPP = g++
SOURCES=YourPets1.cpp YourPets2.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=$(OBJECTS:.o=.out)

all: $(EXECUTABLE)

clean:
	rm $(OBJECTS) $(EXECUTABLE)

.o.out:
	$(CPP) $< -o $@
	./$@

.cpp.o:
	$(CPP) -c $< -o $@