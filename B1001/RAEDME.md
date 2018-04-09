# B1001

## 结题思路
### 主要难点
奇偶数的区分
### 解题流程
- 读入题目给出的自然数n，使用while语句判断n是否为1。
	- 如果是1，就退出循环，打印step，结束。
	- 如果不是1，就判断n是否为奇数。
		- 是奇数，n=(3n+1)/2
		- 是偶数，n=n/2
		
```flow
start=>operation: Start
con1=>condition: while(n != 1)
con2=>condition: 是否为奇数
op1=>operation: n = (3n+1)/2
op2=>operation: n = n/2
op3=>operation: step++
cout=>inputoutput: 输出操作的次数step
end=>end: End 

start->con1(yes)->con2(yes)->op1->op3
con2(no, right)->op2->op3
con1(no)->cout->end 
```
### 变量定义
Input|type|describe
--|--|--
n |int|自然数

Output|type|describe
--|--|--
step| int | 从n计算到1的步数

