# src/Makefile.  Generated from Makefile.in by configure.

srcdir = .


package = hotbodies
version = 0.1
tarname = hotbodies
distdir = $(tarname)-$(version)

prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin

CXXFLAGS = -g -O2 -Wall -Wextra -std=c++0x

all: hotbodies

hotbodies: main.o DoubleTextParser.o DoubleTextParserFactory.o Matrix.o
	$(CXX) $(CXXFLAGS) -o $@ $(srcdir)/main.o $(srcdir)/Matrix.o $(srcdir)/DoubleTextParser.o $(srcdir)/DoubleTextParserFactory.o

DoubleTextParser.o: DoubleTextParser.cpp DoubleTextParser.hpp
DoubleTextParserFactory.o: DoubleTextParserFactory.cpp DoubleTextParserFactory.hpp

clean:
	-rm hotbodies

check: all
	@echo "FAILURE: Tests need to be implemented."

Makefile: Makefile.in ../config.status
	cd .. $$ ./config.status $@

../config.status: ../configure
	cd .. && ./configure.status --recheck

.PHONY: all clean check
