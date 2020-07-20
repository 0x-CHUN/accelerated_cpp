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

## ch6-Using library algorithms

泛型算法是一个不属于任何特定类别容器的算法；

static用于局部声明，声明了具有static存储类型的变量会在这个作用域的执行过程中维持不变；

迭代器适配器是产生迭代器的函数，最常见的是那些产生迭代器insert_iterators的适配器，这样的迭代器会让关联的容器动态地增长。这样地迭代器能被安全地用作一个复制算法的目的地。在头文件iterator中定义。

## ch7-Using associative containers

do-while语句：

```cpp
do{
    statement;
}while(condition);
```

rand()函数：产生一个0到RAND_MAX之间的随机数，RAND_MAX在cstdlib中定义；

pair<k,v>：一种简单类型，保存一对数值，访问通过first和second访问；

map<k,v>：一种关联数组，键类型为k，值类型为v。

## ch8-Writing generic functions

泛型函数支持任何适当类型；

函数对一个未知类型的参数的使用方式约束了这个参数的类型；

实现了泛型函数的语言特征被称作**模板函数**；模板可以为一个行为特征相似的函数族编写一个单独的定义；

模板例子：

```cpp
template<typename T>

void func(T a){
    //...
}
```

`template<typename T>`是模板头，声明使用模板且模板类型是T；

## ch9-Defining new types

c++的类型可以分为两类：

1. 内部类型：char、int、double...
2. 自定义类型：string、vector、stream...

保护标识符：public、private，公有成员（public）通常是可以访问的，私有成员（private）仅对类的成员才是可访问的。

成员函数：既可以在类的内部定义，也可以在外部定义，外部定义时需要指明类作用域；

构造函数：定义类型的初始化方式；

```cpp
class A{
public:
    A(){}; // 空构造函数
    A(int xxx){}; // 另外一个构造函数
    void func(){}; // public 成员函数
    void func1(); // 类外定义的成员函数
private:
    std::string xxx; // 私有
    void func2(){};
};

void A::func1(){
    //
};
```

## ch10-Managing memory and low-level data structures

指针：存放对象地址的值，每一个单独的对象都有一个唯一的地址，该地址指向计算机内存中存放该对象的位置；

```cpp
int x; // x是一个int对象
&x; // x的地址，&为求址运算符
```

```cpp
int* p; // p 具有int*类型
int *p; // *p 具有int类型
```

指向函数的指针与其他类型的指针声明是一样的。

数组：

```cpp
T v[size]; // size必须为const的
```

main函数的参数：

```cpp
int main(int argc, char** argv){};

// argc 代表参数的个数
// argv 为参数，第一个为可执行文件名，第二个开始为命令行参数，访问用下标即可：argv[i]
```

文件读写：

```cpp
#include <fstream>

cerr; // 标准错误流，输出不进入缓冲
clog; // 标准错误流，用于保存作为日志，输出进入缓冲。
ifstream infile("输入文件名");
ofstream outfile("输出文件名");
```

new用于为对象分配内存，而delete为对象释放内存；

```cpp
new T; // 为一个T类型的对象分配内存，对其进行默认初始化，返回一个指向该新对象的指针
new T(val); //为一个T类型的对象分配内存，初始化为val，返回一个指向该新对象的指针
delete T; // 删除指针T指向对象，并释放内存。要求指针指向一个动态分配内存的对象、
new T[n]; // 新建一个n个元素的数组
delete[] T; // 删除并释放内存
```

## ch11-Defining abstract data types

模板类：类是一个模板；

```cpp
template <class T> class name{
public:
    // 接口
private:
    // 实现
}
```

this关键字：this只在成员函数中有效，代表指向函数操作对象的指针。

析构函数：定义对象被删除时编译器所作的工作，析构函数的函数名是在类的名字前加一个波浪号(～)；析构函数不带任何参数，无返回值；

一般需要的构造函数：

* 一个或几个构造函数
* 析构函数
* 复制构造函数
* 复制运算函数

C++标准库中提供了管理内存的功能，在头文件memory中提供了allocator的类，可以分配一块预备用来存储对象但是未被初始化的内存块，并返回指向这块内存块的头元素的指针。

## ch12-Making class objects act like values

**类型转换**可以被定义成一个带单个参数的非explicit的构造函数，也可以被定义成operator type_name()形式的转换运算符。

友元函数：类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。

```cpp
typename<class T>
class name{
    friend ret_type func_name();
    //...
}
```

作为类成员的模板函数：一个类可以把模板函数作为成员函数，这个类本身可以是模板类，也可以不是模板类；

## ch13-Using inheritance and dynamic binding

继承属于oop的思想；

```cpp
class base{ // 基类
public:
    // 普通接口
protected:
    // 可以访问派生类的成员函数的接口
private:
    // 只能用以访问基类的成员函数的接口
}
// 基类的公有接口也是派生类接口的一部分
class derived:public baseP{...}; // 派生类
```

在从基类中派生而来的类中可以重定义基类中的操作函数，也可以往派生类中加入自己的成员。类也可以被私有地继承：

```cpp
class priv_derived:private baseP{};
```

继承关系可以嵌套的；

覆盖：如果一个派生类的成员函数与其基类中的一个同名成员函数有相同数目与相同类型的参数，而且两个函数都是（或都不是）const类型的函数，那么派生类的这个函数会覆盖基类的函数。

虚拟析构函数：如果想用指向基类对象的指针来删除一个实际上可能是派生类的对象，那么基类中就需要声明一个虚拟的析构函数。

```cpp
class base{
public:
    virtual ~base() {}
};
```

静态成员是作为类的成员而存在，而不是存在于每个对象实例中。所以，在一个静态成员函数中不能使用this关键字，这种函数只能访问静态成员数据。整个类的每个静态成员数据只有一个实例，一般来说，它必须在实现类的成员函数的源文件中被初始化。因为静态成员函数是在类定义的范围以外被初始化的，所以必须在初始化它的时候在成员数据前面加上类名限制：

```cpp
vlaue-type class_name::static-member-name = value;
```

