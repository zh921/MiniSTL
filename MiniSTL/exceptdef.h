#ifndef MINISTL_EXCEPTDEF_H_
#define MINISTL_EXCEPTDEF_H_

#include <stdexcept>

#include <cassert>

namespace MiniSTL
{

#define MiniSTL_DEBUG(expr) \
  assert(expr)  

#define THROW_LENGTH_ERROR_IF(expr, what) \
  if ((expr)) throw std::length_error(what)

#define THROW_OUT_OF_RANGE_IF(expr, what) \
  if ((expr)) throw std::out_of_range(what)

#define THROW_RUNTIME_ERROR_IF(expr, what) \
  if ((expr)) throw std::runtime_error(what)

} // namepsace MiniSTL

#endif // !MINISTL_EXCEPTDEF_H_

