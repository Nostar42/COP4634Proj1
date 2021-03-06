CXX = g++
CXXFLAGS = -std=c++14 -g -Wall

OBJECTS = param.o toke.o 
HEADERS := $(shell find . -path ./test -prune -o -name "*.hpp" -print)

main: main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf *.dSYM
	$(RM) *.o *.gc* encryptedData.txt main rawData.txt HashMap.txt

git: 
	git add .
	git commit -m "AutoPush"
	git push -u origin main
