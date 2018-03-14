# 2.4 泛型编程

面向对象编程关注的是数据.<br>
泛型编程关注的是算法,目的是编写独立于数据类型的代码.<br>
模板使算法独立于存储的数据类型，迭代器使算法独立于使用的容器类型.

copy算法,可以将数据从一个容器复制到另一个容器.
```cpp
#include <iterator>
...
ostream_iterator<int, char> out_iter(cout, " ");

copy(dice.begin, dice.end(), out_iter);
// 等价于 (匿名迭代器)
copy(dice.begin, dice.end(), ostream_iterator<int, char>(cout, " "));
```
