AM_CXXFLAGS = -std=c++0x
SUBDIRS = gtest-1.7.0
TESTS = test
check_PROGRAMS = test
test_SOURCES = main.cpp
test_LDADD = gtest-1.7.0/lib/libgtest.la gtest-1.7.0/lib/libgtest_main.la $(LIBS)
test_CPPFLAGS = -I$(top_srcdir)/src -I$(top_srcdir)/test/gtest-1.7.0/include -I$(top_srcdir)/test/gtest-1.7.0

#check_LTLIBRARIES= gtest-1.7.0/lib/libgtest.la gtest-1.7.0/lib/libgtest_main.la
