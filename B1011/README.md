# B1011

## 结题思路
### 主要难点
A、B、C 三个参数的数据存储类型的选择
int 类型的数据范围是 正负2^31。两数相加可能会超过存储范围，使用 long long 型存储。
### 解题流程
- 获取测试用例个数 T
- 设置一个 while 循环，循环次数为T
	- 每次循环，读入一组新的参数A、B、C
	- 判断 A+B > C ?
		- True：按格式输出
		- False：按格式输出
### 变量定义
Input|type|describe
--|--|--
T | int | 测试用例个数
A、B、C | long long | 每组 测试参数


Output|type|describe
--|--|--
t | int | 当前属于第t组测试用例  