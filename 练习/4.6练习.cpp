iter的类型是vector<string>::iterator.

(a)*iter++, 解引用vector首地址的元素
(b)(*iter)++,错误,元素是string,无法自增.
(c)*iter.empty(), 点运算符优先级高于解引用运算符,iter指针里没有empty方法
(d)iter->empty(); 正确
(e)++*iter, 错误的写法,自增运算符优先级高,++*, 用法错误
(f) iter++ -> empty(); 正确,指针自增后,使用旧值的副本调用其元素的empty方法
