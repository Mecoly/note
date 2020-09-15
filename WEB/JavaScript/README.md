# JavaScript

- [基础知识](#基础知识)
  * [使用](#使用)
  * [注释](#注释)
  * [基础数据类型](#基础数据类型)
  * [运算符](#运算符)
  * [引用数据类型](#引用数据类型)
  * [条件控制](#条件控制)
    - [分支结构](#分支结构)
    - [循环结构](#循环结构)
  * [函数](#函数)
  * [输入输出](#输入输出)
  * [面向对象](#面向对象)
- [DOM](#DOM)
  * [访问HTML元素](#访问HTML元素)
  * [修改HTML元素](#修改HTML元素)
  * [增加HTML元素](#增加HTML元素)
  * [删除HTML元素](#删除HTML元素)
- [BOM](#BOM)
  * [页面URL](#页面URL)
  * [客户机屏幕信息](#客户机屏幕信息)
  * [弹出新窗口](#弹出新窗口)
  * [对话框](#对话框)
  * [定时器](#定时器)
  * [桌面通知](#桌面通知)
  * [浏览器地理位置](#浏览器地理位置)

## 基础知识

### 使用
导入：`<script src="test.js" type="text/javascript"></script>`

运行：

```
<script>
    alert("Hello world!!!");
</script>
```
### 注释
单行注释：`//`

多行注释：以`/*`开始，以`*/`结束
### 数据类型
`typeof`：判断类型
#### 基础数据类型
数值类型(Number)、布尔类型(Boolean)、字符串（String）、对空（Null）、未定义（Undefined）

类型转换：toString() parseInt() parseFloat()
#### 引用数据类型
Object Array Function
### 运算符
#### 算术运算符
`+ - * / % ++ --`
#### 位运算符
`& | ~ ^ << >> >>>`
#### 赋值运算符
`=`

算术运算符、位运算符结合=
#### 比较运算符
`> >= < <= == != === !==`
#### 逻辑运算符
`&& & || | ! ^`

&&：短路与

^：异或
#### 三目运算符
`a:b?c`

```java
if(a){
    return b;
}
else{
    return c;
}
```

### 条件控制
#### 分支结构
if switch
#### 循环结构
while do-while for for-in
#### 控制语句
break continue
### 函数
```
function functionName()
{
    //op
}
```
### 面向对象


## DOM

### 访问HTML元素
#### 根据ID访问HTML元素
`document.getElementById(idVal);`
#### 根据CSS选择器访问HTML元素
```
document.querySelector(selectors);
document.querySelectorAll(selectors);
```
#### 利用节点关系访问HTML元素
|属性|作用|
|:-:|:-:|
|parentNode|父节点|
|previousSibing|前一个兄弟节点|
|nextSibing|后一个兄弟节点|
|childNodes|所有子节点|
|firstChild|所有子节点|
|lastChild|所有子节点|
|getElementsByTagName(tagName)|具有指定标签名的所有子节点|

### 修改HTML元素
|属性|含义|
|:-:|:-:|
|innerHTML|大部分页面元素的呈现内容|
|value|表单控件内容|
|className|CSS样式-class选择器|
|style|CSS样式|
|options\[index]|列表项、下拉菜单的指定列表项|

### 增加HTML元素
创建节点：`document.creatElement(Tag)`

添加节点：
```
appendChild(Node newNode);
insertBefore(Node newNode,Node refNode);
replaceChild(Node newChild,Node oldChild);
```

列表框、下拉菜单：`new option(text,value,defaultSelected,selected)`

HTMLTableElement：`add(HTMLOptionElement option,HTMLOptionElement before)`

表格：

|HTMLSelectElement方法|作用|
|:-:|:-:|
|insertRow(index)|在index插入一行|
|createCaption()|创建标题|
|createTFoot()|创建TFoot|
|createTHead()|创建THead|
|insertCell(index)|在index插入单元格|

### 删除HTML元素
`removeChild(oldNode);`

HTMLTableElement：`remove(long index)`

HTMLSelectElement：`deleteRow(long index)`和`deleteCell(long index)`


## BOM

window对象

### 页面URL
属性：location

属性：hostname href host port pathname protocol
### 客户机屏幕信息
属性：screen

属性：width height colorDepth
### 弹出新窗口
方法：open()

### 对话框
方法：`confirm()`和`prompt()`
### 定时器
方法：

`setInterval("code",interval)`和`clearInterval(timer)`

`setTimeout("code",interval)`和`clearTimeout(timer)`
### 桌面通知
Notification类

`Notification(title,options)`

optio属性：dir lang badge body tag icon image data vibrate renotify requireInteraction

监听事件：error click close show
### 浏览器相关
navigator属性
