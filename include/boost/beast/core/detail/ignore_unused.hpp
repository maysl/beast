#ifndef BOOST_BEAST_CORE_DETAIL_IGNORE_UNUSED_HPP
#define BOOST_BEAST_CORE_DETAIL_IGNORE_UNUSED_HPP

#include <boost/version.hpp>

#if BOOST_VERSION >= 105600
#include <boost/core/ignore_unused.hpp>
#else

namespace boost {
template <class... Ts>
inline constexpr void ignore_unused(Ts...) {}
} // namespace boost

#endif // BOOST_VERSION >= 105600

#endif // BOOST_BEAST_CORE_DETAIL_IGNORE_UNUSED_HPP

