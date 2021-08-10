#ifndef MINISTL_ASTRING_H_
#define MINISTL_ASTRING_H_

// 定义了 string, wstring, u16string, u32string 类型

#include "basic_string.h"

namespace MiniSTL
{

using string    = MiniSTL::basic_string<char>;
using wstring   = MiniSTL::basic_string<wchar_t>;
using u16string = MiniSTL::basic_string<char16_t>;
using u32string = MiniSTL::basic_string<char32_t>;

}
#endif // !MINISTL_ASTRING_H_

