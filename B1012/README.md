# B1012

## 解题思路
### 主要难点
如何节约空间和时间。如果将所有的N个数据全部读入保存到数组后再在后续进一步进行分类，将分类得到的结果在保存到每个分类对应的数组中。然后再对五个数组进行相应的输出格式要求操作。这样子，就会需要建立6个数组，而且需要进行6次对数组的遍历，会浪费很多时间和空间。比较好/极端的方式，就是在数据读入的过程中就对数据边读边分类边操作。将该分组中对输出有影响的结果保存到对应的分组变量中，这样子就只需要使用五个变量就可以实现输出所要的结果了。

如果该分组的数据不存在就需要输出“N”。在输出的最后不能添加空格。

由于每一组数据的输出格式要求都不一样，	

在题目中输入的待分类整数个数N小于1000，而且给出的待分类的整数也都小于1000。所以可以使用int型来保存所有的数据。


### 解题流程
- 读取后续需要读入的待分类的整数的个数N
- 使用while循环，读取N个待分类的整数，
	- 在每次读取的过程中，对当前读入的数据进行分类，并将分类得到的数据保存到对应的五个数组中。在保存的过程中实现对它们的运算，节省第二次循环遍历的时间。
- 依次输出五个结果。

### 变量定义
Input|type|describe
--|--|--
N | int | 待分类的数据的个数

Output|type|describe
--|--|--
A1、A2、A3、A4、A5 |int | 每个分类的计算结果 | 
