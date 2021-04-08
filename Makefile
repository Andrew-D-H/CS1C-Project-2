bulk: main.cpp readMember.o
	g++ main.cpp -o , readMember.o

readMember: readMember.cpp
	g++ -c readMember.cpp -o readMember.o
