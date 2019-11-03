CXXFLAGS += --std=c++17
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: mass

mass: main-gui.o mainwin.o shelter.o animal.o dog.o *.h
	$(CXX) $(CXXFLAGS) main-gui.o mainwin.o shelter.o animal.o dog.o $(GTKFLAGS) -o mass
main-gui.o: main-gui.cpp *.h
	$(CXX) $(CXXFLAGS) -c main-gui.cpp $(GTKFLAGS) -o main-gui.o
mainwin.o: mainwin.cpp *.h
	$(CXX) $(CXXFLAGS) -c mainwin.cpp $(GTKFLAGS) -o mainwin.o
shelter.o: shelter.cpp *.h
	$(CXX) $(CXXFLAGS) -c shelter.cpp -o shelter.o
animal.o: animal.cpp *.h
	$(CXX) $(CXXFLAGS) -c animal.cpp -o animal.o
dog.o: dog.cpp *.h
	$(CXX) $(CXXFLAGS) -c dog.cpp -o dog.o
clean:
	rm -f *.o *.gch a.out sweets sweets-cli mass

