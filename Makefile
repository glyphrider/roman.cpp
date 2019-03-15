OBJS=test.o roman.o gtest-all.o
GOOGLETEST ?= ./googletest/googletest

run-tests : test
	./test

test : $(OBJS)
	$(CXX) $(CXXFLAGS) -pthread -o $@ $^

gtest-all.o : $(GOOGLETEST)/src/gtest-all.cc
	$(CXX) $(CXXFLAGS) -I$(GOOGLETEST) -I$(GOOGLETEST)/include -c -o $@ $<

%.o : %.cc
	$(CXX) $(CXXFLAGS) -I$(GOOGLETEST)/include -c -o $@ $<

clean :
	rm -f test $(OBJS)
