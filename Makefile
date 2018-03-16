OBJS=test.o roman.o gtest-all.o
GTEST_DIR ?= ./gtest

test : link
	./test

link : $(OBJS)
	g++ -pthread -o $@ $^

gtest-all.o : $(GTEST_DIR)/src/gtest-all.cc
	g++ -I$(GTEST_DIR) -I$(GTEST_DIR)/include -c -o $@ $<

%.o : %.cc
	g++ -I$(GTEST_DIR)/include -c -o $@ $<

clean :
	rm -f test $(OBJS)
