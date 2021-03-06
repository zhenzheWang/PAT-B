# B1008

## 解题思路
### 主要难点
由于不能使用另外的数组，而且要求移动的次数尽量少。那么我们想到的最极端的情况就是移动0次，直接输出结果。从第N-M个数开始直接输出后续的数字，再依次输出前面的数字。

另外，需要注意的是，在题目中只给出了N的上下限，为0~100。对于M，只说明了是大于等于0的数。可以等于0，也可以是无穷大。所以需要对其进行取余操作，得到可以在N个数据中进行操作的M。

由于输出之前的每个数字之前需要一个空格，如果使用这种方式就需要检测是否输出个数已满，在最后一个数之后不需要添加空格。所以需要引入一个计数用参数。

对于N可以选取int型，对于M为了保险起见，使用long long型。

### 解题流程
- 读取N和M。对M求余数，M=M%N。
- 获取N个输入数据。存到一个数组中。
- 将数组中后M个数字依次打印输出。
- 对数组中前N-M个数字依次打印输出。

### 变量定义
Input|type|describe
--|--|--
N | int | 数组的大小
M | long long | 移动的参数
a[110] | int 数组 | 输入的N个数据

Output|type|describe
--|--|--
a[110] | int 数组 | 变换后的N个数据。

