/*
 * Copyright 2014-2019, CNRS
 * Copyright 2018-2023, INRIA
 */

#include "eigenpy/test-eigenpy.hpp"
#include <boost/python.hpp>
#include <stdlib.h>

namespace bp = boost::python;
namespace eigenpy {

void test_seed(unsigned int seed_value) { srand(seed_value); }

void testPyBinding() {
  PySys_WriteStdout("--------------------------------testPyBinding---1\n");
  bp::def("test_seed", &test_seed, bp::arg("seed_value"),
          "Initialize the pseudo-random number generator with the argument "
          "seed_value.");
  PySys_WriteStdout("--------------------------------testPyBinding---2\n");
}

}  // namespace eigenpy
