/**
4.17

前置和后置的区别.

前置运算符,将当前值递增并返回.

后置运算符,保留当前值的一个副本作为返回值,当前值递增.

*/

/**
4.18
改为前置递增,解引用该值将产生错误的结果.不但无法输出第一个元素,而且更糟糕的是,可能在解引用
一个并不存在的元素.

*/

/**
4.19

int *ptr;
vector<int> vec;
int ival;

(a) ptr != 0 && *ptr++
有点问题,如果指针不为空,但是指向最后一个元素,表达式的后半段会报错,是正在解引用一个不存在的元素.

(b) ival++ && ival
有问题,&&是短路操作符,后半段的判断是不可达的.

(c)vec[ival++] <= vec[ival]
有问题,可能会数组角标越界.

*/
