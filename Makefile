OBJS=test.o roman.o gtest-all.o
GTEST_ROOT ?= ../../../gtest-1.6.0

run : test
	./test

test : $(OBJS)
	g++ -pthread -o $@ $^

gtest-all.o : $(GTEST_ROOT)/src/gtest-all.cc
	g++ -I$(GTEST_ROOT) -I$(GTEST_ROOT)/include -c -o $@ $<

%.o : %.cc
	g++ -I$(GTEST_ROOT)/include -c -o $@ $<

clean :
	rm -f test $(OBJS)
