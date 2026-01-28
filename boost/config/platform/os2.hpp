//  (C) Copyright John Maddock 2001 - 2003. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

//  os2 specific config options:

#define BOOST_PLATFORM "OS2"
#define BOOST_HAS_DIRENT_H

//
// Threading API:
#define BOOST_HAS_PTHREADS
#define BOOST_HAS_NANOSLEEP
#define BOOST_HAS_GETTIMEOFDAY
#define BOOST_HAS_SIGACTION

#define BOOST_HAS_UNISTD_H
#define BOOST_HAS_STDINT_H

// boilerplate code:
#include <boost/config/detail/posix_features.hpp>




