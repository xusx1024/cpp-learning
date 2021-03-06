# const
---

const修饰变量,该变量的值不能改变.

因为一旦创建后值就不能变,所以const对象必须初始化.

为什么const对象必须初始化?
比如`const int buffer_size = 512;`,编译器会找到代码中所有用到buffer_size的地方,然后替换
成512.为了执行这个替换,编译器必须知道变量的初始值.

默认情况下,const对象被设定仅在文件内有效,如果有多个文件定义了同名的const变量,其实等同于在
不同文件分别定义了独立的变量.
如果想要在多个文件共享同一个const变量,使用extern关键字:
`extern const int buffer_size = 512;`

---

引用类型必须与引用对象的类型一致,例外1:初始化`常量引用`时,允许用任意表达式作为初始值,只要该
表达式的结果能转换成引用的类型即可.

指针的类型必须与其所指的对象的类型一致,例外1:允许一个指向常量的指针指向一个非常量对象.

换个想法:所谓指向常量的指针或引用,不过是指针或引用"自以为是"罢了,它们觉得自己指向了常量,所以
自觉地不去改变所指向对象的值.

```
int errNumb = 0;
int *const curErr = &errNumb;// curErr将一直指向errNumb
const double pi = 3.14159;
const double *const pip = &pi;// pip是一个指向常量对象的常量指针
```
通过从右向左的方式阅读这些声明.
`int *const curErr`: const 表明curErr是一个常量,int * 表明curErr是一个int指针.因此是一个常量指针.
`const double *const pip`: 常量指针.

说明:指针本身是一个常量并不意味着不能通过指针修改其所指对象的值,能否修改,完全取决于所指向的
对象是不是一个常量.

由于curErr指针,是一个常量指针,他自己存储的地址不能改变,又,curErr指向的errNumb是一个非常量,
因此,可以通过curErr修改errNumb的值;

由于pip指针,是一个指向常量的常量指针,他自己的地址和他指向的对象值,都不能改变.

---

指针本身是一个对象,它又可以指向另外一个对象.
用顶层const表示指针本身是个常量.
用底层const表示指针所指的对象是一个常量.

顶层const可以表示任意对象是常量,对任何数据类型都适用.
底层const则与指针和引用等复合类型的基本类型部分有关.
特殊的是,指针类型既可以是顶层const也可以是底层const.
用于声明引用类型的const都是底层const.

当执行对象拷贝操作是,顶层const不受影响,但是,拷入和拷出的对象必须具有相同的底层const资格,
或者两个对象的数据类型必须能够转换.一般来说,非常量可以转换为常量,反之不行.

---

C++ 11 新标准规定,允许将变量声明为constexpr类型,以便由编译器来验证变量的值是否是一个常量表达式.

>`BestPractice:`一般来说,如果你认定变量是一个常量表达式,那就把它声明成constexpr类型.
