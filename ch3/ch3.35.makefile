# chaoma-macbookpro:ch3 chaoma$ make -f ch3.35.makefile all
# chaoma-macbookpro:ch3 chaoma$ make -f ch3.35.makefile debug

CPP=g++
SOURCE=ch3.31.cpp
RELEASE=$(SOURCE:.cpp=.release)
DEBUG=$(SOURCE:.cpp=.debug)

all: $(RELEASE)
	./$(RELEASE)

$(RELEASE):$(SOURCE)
	$(CPP) $(SOURCE) -o $(RELEASE) 

debug: $(DEBUG)
	./$(DEBUG)

$(DEBUG):$(SOURCE)
	$(CPP) -D DEBUG $(SOURCE) -o $(DEBUG)