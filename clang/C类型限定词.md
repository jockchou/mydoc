# ANSI C类型限定词 #

我们知道一个变量是在它的类型和存储类表征的。类型即是int，char，double这种数据类型，它决定变量分配空间的大小。存储类型即是auto，register，static，extern，它影响变量在内存中的存储区域。C90标准增加了两个属性：不变性和易变性。它通过关键字const和volatile声明。C99添加了restrict，用以方便编译器优化。

# 类型限定词const #

如果变量声明中带有关键字const，则不能通过赋值，增加或减量运算来改变变量的值。下面的代码将产生个错误：
```
const int nochange;
nochange = 12;

error: assignment of read-only variable ‘nochange’
```
错误说明`nochange`变量是只读的，在初始化以后，不能修改它的值。然而可以初始化一个const变量。下面的代码是正确的：
```
const int nochange = 12;
```
可以，可以使用const关键字创建一个不可改变数组：
```
#include <stdio.h>

int main(void)
{
	const int days[] = {31, 28, 30, 31};
	
	days[0] = 30;
	
	return 0;
}

error: assignment of read-only location ‘days[0]’
```
编译时同样会报只读的错误。


