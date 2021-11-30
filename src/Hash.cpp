#include "Hash.h"

#include "CityHash.h"

PYBIND11_MODULE(_pyhash, m)
{
  m.doc() = "Python Non-cryptographic Hash Library";

#if defined(__SSE4_2__) && defined(__x86_64__)
  m.attr("build_with_sse42") = true;
#else
  m.attr("build_with_sse42") = false;
#endif

#ifdef SUPPORT_INT128
  m.attr("build_with_int128") = true;
#else
  m.attr("build_with_int128") = false;
#endif

#ifdef _MSC_VER
  m.attr("_MSC_VER") = _MSC_VER;
#endif

#ifdef __GNUC__
  m.attr("_GCC_VER") = __GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__;
#endif

#ifdef __clang__
  m.attr("_CLANG_VER") = __clang__ * 10000 + __clang_major__ * 100 + __clang_patchlevel__;
#endif

#ifdef __VERSION__
  m.attr("__VERSION__") = __VERSION__;
#endif

  city_hash_32_t::Export(m, "city_32");
  city_hash_64_t::Export(m, "city_64");
#ifdef SUPPORT_INT128
  city_hash_128_t::Export(m, "city_128");
  city_hash_crc_128_t::Export(m, "city_crc_128");
  city_fingerprint_256_t::Export(m, "city_fingerprint_256");
#endif
}