OBJS=test.o roman.o gtest-all.o
GTEST_DIR ?= ./googletest/googletest

run-tests : test
	./test

test : $(OBJS)
	$(CXX) $(CXXFLAGS) -pthread -o $@ $^

gtest-all.o : $(GTEST_DIR)/src/gtest-all.cc
	$(CXX) $(CXXFLAGS) -I$(GTEST_DIR) -I$(GTEST_DIR)/include -c -o $@ $<

%.o : %.cc
	$(CXX) $(CXXFLAGS) -I$(GTEST_DIR)/include -c -o $@ $<

clean :
	rm -f test $(OBJS)
