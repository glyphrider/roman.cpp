OBJS=test.o roman.o gtest-all.o
GTEST=../../../gtest-1.6.0

run : test
	./test

test : $(OBJS)
	g++ -pthread -o $@ $^

gtest-all.o : $(GTEST)/src/gtest-all.cc
	g++ -I$(GTEST) -I$(GTEST)/include -c -o $@ $<

%.o : %.cc
	g++ -I$(GTEST)/include -c -o $@ $<

clean :
	rm -f test $(OBJS)
