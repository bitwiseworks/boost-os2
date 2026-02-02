//  (C) Copyright John Maddock 2001 - 2003. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

//  os2 specific config options:

#define BOOST_PLATFORM "OS2"
#define BOOST_HAS_DIRENT_H
#define BOOST_HAS_NL_TYPES_H

//
// Threading API:
#define BOOST_HAS_PTHREADS
#define BOOST_HAS_PTHREAD_YIELD
#define BOOST_HAS_NANOSLEEP
#define BOOST_HAS_GETTIMEOFDAY
#define BOOST_HAS_SIGACTION

#define BOOST_HAS_UNISTD_H
#define BOOST_HAS_STDINT_H

//  Default defines for BOOST_SYMBOL_EXPORT and BOOST_SYMBOL_IMPORT
//  If a compiler doesn't support __declspec(dllexport)/__declspec(dllimport),
//  its boost/config/compiler/ file must define BOOST_SYMBOL_EXPORT and
//  BOOST_SYMBOL_IMPORT
#ifndef BOOST_SYMBOL_EXPORT
#  define BOOST_HAS_DECLSPEC
#  define BOOST_SYMBOL_EXPORT __declspec(dllexport)
#  define BOOST_SYMBOL_IMPORT
#endif

// boilerplate code:
#include <boost/config/detail/posix_features.hpp>




