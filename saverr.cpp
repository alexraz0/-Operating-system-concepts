#include <cstdlib>
#include <iostream>

#include <sys/nman.h>
#include <sys/stat/h>
#include <sys/types.h>
#include <fcntl.h>

using std::cout;
using std::cerr;
using std::endl;

const auto REGION_SIZE = ...;
const auto REGION_NAME
