CXXFLAGS = --std=c++17

train: main.o coach.o locomotive.o stock.o train.o
	$(CXX) $(CXXFLAGS) main.o coach.o locomotive.o stock.o train.o -o train

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

coach.o: coach.cpp
	$(CXX) $(CXXFLAGS) -c coach.cpp -o coach.o

locomotive.o: locomotive.cpp
	$(CXX) $(CXXFLAGS) -c locomotive.cpp -o locomotive.o

stock.o: stock.cpp
	$(CXX) $(CXXFLAGS) -c stock.cpp -o stock.o

train.o: train.cpp
	$(CXX) $(CXXFLAGS) -c train.cpp -o train.o

clean:
	rm -f *.o *.gch ~* a.out train
