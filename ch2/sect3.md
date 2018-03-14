# 2.3 标准模板库(STL)
STL提供了一组表示容器,迭代器,函数对象和算法的模板.1994年发布.STL是C++标准的组成部分,但它不是面向对象编程,而是一种泛型编程.

**构造**
```cpp
...
#include <vector>
...

vector<type> param(size);
```
**操作**
* 访问单个元素---- param[0]
* 基本的方法
    - size()  --- 容器中元素数目
    - swap()  --- 交换容器类容
    - begin()  --- 返回一个指向容器第一个元素的迭代器
    - end()    --- 返回一个超过容器尾的迭代器 <br>
    - push_back() --- 将元素添加到矢量末尾
    - erase()     --- 删除矢量中给定区间的元素
    - insert()    --- 向矢量中插入一个给定区间
<p style="color:red;">迭代器的概念:实际上就是一个广义的指针.</p>
```cpp
vector<double>::iterator pd;
vector<double> scores;

pd = scores.begin;
*pd = 22.3;
++pd;
```
除了使用迭代器,还可以使用C++11中的自动类型推断.
```cpp
auto pd = scores.begin();
```

* 其他操作<br>
    非成员函数概念.
    - for_each() --- for循环的简化
    - random_shuffle() --- 随机排列该区间的元素
    - sort()           --- 排序

