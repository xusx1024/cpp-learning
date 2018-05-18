# struct和class的区别
---
C++中保留了C中struct关键字,并且加以扩充.在C语言中,struct只能包含成员变量,不能包含成员函数.
在C++中,struct类似于class,既可以包含成员变量,又可以包含成员函数.

struct与class的不同:
1. struct默认是public,class默认是private
2. struct的继承默认是public继承,class是private继承
3. class可以使用模板,struct不可以.

取舍?
如果你做的更像是一种数据结构,使用struct
如果你做的更像是一种对象的话,使用class.

对于访问控制问题,应该在程序里明确的指出,而不是依靠默认,这是良好的习惯,也让你的代码更具可读性.
