//  windows_tools.hpp  -----------------------------------------------------------------//

//  Copyright 2001 Dietmar Kuehl
//  Copyright 2002-2009, 2014 Beman Dawes
//  Copyright 2021-2022 Andrey Semashev

//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

//  See library home page at http://www.boost.org/libs/filesystem

//--------------------------------------------------------------------------------------//

#ifndef BOOST_FILESYSTEM_SRC_OS2_TOOLS_HPP_
#define BOOST_FILESYSTEM_SRC_OS2_TOOLS_HPP_

#include <boost/filesystem/config.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/file_status.hpp>
#include <boost/system/error_code.hpp>
#include <boost/scope/unique_resource.hpp>

#include <boost/filesystem/detail/header.hpp> // must be the last #include

namespace boost {
namespace filesystem {
namespace detail {


BOOST_INLINE_VARIABLE BOOST_CONSTEXPR_OR_CONST char colon = ':';
BOOST_INLINE_VARIABLE BOOST_CONSTEXPR_OR_CONST char questionmark = '?';

inline bool is_letter(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}



} // namespace detail
} // namespace filesystem
} // namespace boost

#include <boost/filesystem/detail/footer.hpp>

#endif // BOOST_FILESYSTEM_SRC_OS2_TOOLS_HPP_
