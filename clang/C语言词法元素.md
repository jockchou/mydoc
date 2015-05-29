# 1.C语言词法元素 #

本章介绍C语言源代码预处理后的词法元素构成。这些元素称为tokens，有5种类型：关键字，标识符，常量，运算符和分隔符。空白符号有时候也被当成分隔符，也会在本章中描述。


## 标识符 ##
- 关键字是用来命名变量，函数，新数据类型，预处理宏的字符序列。它包括字母，十进制数字和下划线字符。
- 标识符的第一个字符不能为数字。
- 大小写敏感。
- 使用GNU扩展时，标签符还可以包括“$”符号。

## 关键字 ##
关键字是一种特殊的标识符，它作为编程语言本身的一部分被保留，你不能使用关键字来作其他用途，它作为编程语言的组成部分，有特殊的用途和含义。也就是说定义标识符的时候，不要使用关键字，否则编译器会报错。

**C89关键字：**
```
auto break case char const continue default do double else enum 
extern float for goto if int long register return short signed 
sizeof static struct switch typedef union unsigned void volatile while
```
**C99关键字:**
```
inline _Bool _Complex _Imaginary
```

**还有一个关键字:**
restrict

**GNU扩展关键字：**
```
__FUNCTION__ __PRETTY_FUNCTION__ __alignof __alignof__ __asm
__asm__ __attribute __attribute__ __builtin_offsetof __builtin_va_arg
__complex __complex__ __const __extension__ __func__ __imag __imag__
__inline __inline__ __label__ __null __real __real__
__restrict __restrict__ __signed __signed__ __thread __typeof
__volatile __volatile__
```



















