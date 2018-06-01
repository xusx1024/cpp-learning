||C字符串|C++string对象|
|:-:|:-:|:-:|
|所需的头文件名称|`<string>` `<string.h>` |`<string>` `<string.h>`|
|需要头文件的原因|为了使用字符串函数|为了使用string类|
|声明方式|`char name[20]`|`string name`|
|初始化方式|`char name[20]="nihao"`|`string name = "nihao"`|
|是否必须声明字符串长度|Y|N|
|是否使用一个null字符|Y|N|
|字符串赋值的实现方式|`strcpy(name,"John")`|`name="John"`|
|优点|更快|更易于使用,优选方案|
|是否可以赋值一个长于现有长度的字符串|N|Y|

> 保持风格一致,不要混用.

> 为兼容C语言,C++中所有的字符串字面值都由编译器自动在末尾添加一个空字符.
