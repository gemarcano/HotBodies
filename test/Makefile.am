TESTS = test
check_PROGRAMS = test
test_SOURCES = main.cpp
test_LDADD = gtest-1.7.0/libgtest.a gtest-1.7.0/libgtest_main.a $(LIBS)
test_CPPFLAGS = -I$(srcdir)/gtest-1.7.0/include -I$(srcdir)/gtest-1.7.0

#check_LTLIBRARIES= gtest-1.7.0/libgtest.a gtest-1.7.0/libgtest_main.a

gtest-1.7.0/libgtest.a:
	build-gtest
gtest-1.7.0/libgtest_main.a:
	build-gtest

build-gtest:
	cmake ./gtest-1.7.0
	make -C ./gtest-1.7.0
