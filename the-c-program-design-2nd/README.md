# The C Program Design(Second Edition)

## Chapter1: A Tutorial Introduction

## Chapter2: Types, Operators, Expressions

基础类型有:

- char
- int
- float
- double

额外限定符, 可以修饰int:

- short, `short int sh;`
- long, `long int counter;`

有限定符修饰时, int可省略, 如下:
`short sh;long counter;`

类型修饰符, 可修饰char或任意int:

- signed, 有符号(+ -)
- unsigned, 无符号总是非负数

如果char是8bit, 那么:

- unsigned char, 值范围是[0, 255]
- signed char, 值范围是[-128, 127]

long double, 表示高精度;
同int一样, 浮点数的bit数也是由精度决定的.
精度,从低到高,如下:
float, double, long double

头文件:limits.h, float.h包含所有如上的符号常量

### 2.3 Constants 常量

十进制表示: 0

十六进制表示: 以`0x`或`0X`开头表示;

- 十进制的31用十六进制表示, 如:0x1f, 0X1F
- unsigned long类型的十进制15, 用十六进制表示如: 0xful, 0XFUL

ANSI C语言中的全部转义字符序列如下:

```text
\a 响铃符 \\ 反斜杠
\b 回退符 \? 问号
\f 换页符 \' 单引号
\n 换行符 \" 双引号
\r 回车符 \ooo 八进制数
\t 横向制表符 \xhh 十六进制数
\v 纵向制表符
```

- string constant, 字符串常量
- constant expression, 常量表达式
- enumeration constant, 枚举常量
    - 一系列int常量的集合

### 2.4 Declaration 声明

declare before use

### 2.5 Arithmetic Operators 算术运算符

有`+ - * / %`, 执行顺序:从左到右

### 2.6 Relational and Logical Operators 关系运算符与逻辑运算符

- 关系运算符
    - `< > >= <=`
- 逻辑运算符
    - `== != && || !`

### 2.7 Type Conversions 类型转换

- 短范围类型,转换为, 长范围类型 (为了不丢失信息)
- 表达式可能会丢失信息, 当用一个短范围类型接受长范围类型的计算结果时

### 2.8 自增运算符与自减运算符
