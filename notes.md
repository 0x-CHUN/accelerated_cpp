# Accelerated C++

## ch0-Getting started

C++中的注释：

```cpp
// 注释
```

导入Library使用`#include <Library name>`。`<>`代表为C++的standard header。

输出：`std::cout<<"hello world!"<<std::endl`；

输入：`std::cin << num`;

`::`操作符为scope operator，可以指定命名空间。

## ch1-Working with strings

string是标准库中的一部分，而不是C++的核心。

声明一个字符：`std::string name`；

输入使用cin：`cin >> name`；

使用`const`定义常量;

两个string可以用`+`连接（`+`运算符重载了）；

类型：

* char：内建的char型，与C语言一致。
* wchar_t：内建的类型，wide characters：足够容纳其他大的字符，如日文、中文等。

String：

* `std::string s`：初始化一个字符串s
* `std::string s = t`：初始化一个字符串s，复制t
* `std::string s(n,c)`：初始化一个字符串s，n个字符c
* `os << s`：字符s输出到输出流os中
* `is >> s`：从输入流中获取到字符串s
* `s + t`：字符s和t相连接
* `s.size()`：字符串s的数量

## ch2-Looping and counting

while循环的结构：

```cpp
while(condition){
    statement
}
```

`std::size_type`是STL中定义的类型属性，在表示容器的长度时使用，以便拥有良好的移植性。

if-else的结构：

```cpp
if(condition){
    statement
}
else if(condition){
    statement
}
else{
    statement
}
```

逻辑操作符：

* 与：`&&`
* 或：`||`
* 非：`!`

using-declaration：

```cpp
using std::cout; //则使用cout可直接用cout，而不用std::cout
```

for循环结构：

```cpp
for(int i = 0; i < size; i++){
    statement
}
```

## ch3-Working with batches of data

头文件`<ios>`里定义了streamsize，类型 `std::streamsize` 是用于表示 I/O 操作中转移字符数或 I/O 缓冲区大小的有符号整数类型。

头文件`<iomanip>`里的setprecision用于表达式 **out << setprecision(n)** 或 **in >> setprecision(n)** 时，设置流 `out` 或 `in` 的 `precision` 参数准确为 `n` 。

类型定义：

```cpp
// 将name定义为type的同义词
typedef type name;
```

`std::vector` 是封装动态数组的顺序容器。

```cpp
using std::vector;
vector<T> v; // 初始化一个vector，里面存储类型T的数据
v.begin(); // 返回v中的第一个数据
v.end(); // 返回v中的最后一个数据
v.push_back(e); // v在最后面插入e
v[i]; // 返回位置i的数据
v.size(); // 返回v的大小
```

排序vector：

```cpp
using std::sort;

sort(v.begin(),v.end());
```

循环读取：

```cpp
// 循环读取，赋值给x，如果读取完成则会退出while
while(cin >> x){
}
```

## ch4-Organizing programs and data

函数的定义：

```cpp
[inline] 返回类型 函数名(参数列表){
    函数体
}
```

inline是可选的，inline会在适当的条件下请求编译器把调用扩展成内联子过程，减少函数调用的开销；

`&`表示为引用；

const表示为不可修改的变量；

c++定义struct与c语言类似：

```cpp
struct stu{
    string name;
    double midterm, final;
    vector<double> homework;
}
```

排序使用algorithms里的sort：

```cpp
#include <algorithms>

sort(v.begin(), v.end(), cmp);
# 其中cmp为v中元素的比较方式
```

异常处理：

```cpp
try{
    //可能会触发异常的代码
}catch(t){
    //异常处理代码
}
```

## ch5-Using sequential containers and ananlyzing string

容器：vector、list、set...

所有的顺序容器和string类型都支持一下操作：

* `container<T>::iterator`：容器的迭代器
* `container<T>::const_iterator`：表示这个容器的迭代器的类型名
* `container<T>::size_type`：类型名称，表示这个容器可能存在的最大实例的长度
* `c.begin()`：指向容器的第一个元素的迭代器
* `c.end()`：指向容器的最后一个元素之后的那个位置的迭代器

迭代器操作：

* *it：访问其值
* it->x：等同于(*it).x
* it++：指向下一个元素
* it != c.end()：判断

string的操作：

* substr(i, j)：从位置i到j的子字符串
* getline(is, s)：从输入流is读一行且存入s
* +：字符串相加

cctype提供了处理字符数据的函数：

* isspace：判断是否为空白字符
* isalpha：判断是否为字母字符
* isdigital：判断是否为数字
* isalnum：判断是否为字母或数字
* ispunct：判断是否为一个标点符号
* isupper：判断是否为大写字母
* islower：判断是否为小写字母
* tolower：转换为小写
* toupper：转换为大写

