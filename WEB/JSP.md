# JSP
* [JSP语法](#JSP语法)
  - HTML
  - [JSP标记](#JSP标记)
  - [变量和方法的声明](#变量和方法的声明)
  - [Java程序片](#Java程序片)
  - [Java表达式](#Java表达式)
* [JSP内置对象](#JSP内置对象)
  - [request对象](#request对象)
  - [response对象](#response对象)
  - [session对象](#session对象)
  - [application对象](#application对象)
  - [out对象](#request对象)
* [Javabean](#Javabean)
* [Servlet](#Servlet)

* [JSP](#JSP)
## JSP语法
### 变量和方法的声明
`<%!`和`%>`之间
### Java程序片
`<%`和`%>`之间
### Java表达式
`<%=`和`%>`之间
### JSP标记
#### 注释
`<%--`和`--%>`之间
#### 指令标记
`<%@`和`%>`之间
##### page指令标记
|属性|作用|值|
|:-:|:-:|:-:|
|contentType|MIME类型编码|MIME;编码值|
|language|脚本语言|java|
|import|引入包|类|
|session|是否需要session|true(默认) false|
|buffer|out缓冲区大小|none 8KB(默认)|
|autoFlush|out缓冲区填满自动刷新|true(默认) false|
|isThreadSafe|对线程访问|true(默认) false|
|info|常用字符串 getServletInfo()使用|字符串|

##### include指令标记
`<%@ include file="URL" %>`
#### 动作标记
##### include动作标记
`<jsp:include page="URL" />`
```
<jsp:include page="URL">
    param子标记
</jsp:include>
```
##### param动作标记
<jsp:param name="" value="">
##### forward动作标记
`<jsp:forward page="URL" />`
```
<jsp:forward page="URL">
    param子标记
</jsp:forward>
```
##### useBean动作标记
`<jsp:useBean id="" class="" scope="有效范围" />`

```
<jsp:useBean id="" class="" scope="有效范围" >
</jsp:useBean>
```

`<jsp:getProperty name="" property="" />`

`<jsp:setProperty name="" property="" value="" />`

范围：page session request application
## 内置对象
### request对象
|方法|作用|
|:-:|:-:|
|getParameter(String s)|获取表单信息|
|setCharacterEncoding(String s)|设置编码|

### response对象
|方法|作用|
|:-:|:-:|
|getContentType(String s)|修改contentType值|

### session对象

### application对象

### out对象

## Javabean
setXxx() getXxx()
## Servlet
### servlet使用
在demo项目中

编写servlet 编译servlet 配置servlet 使用servlet
#### 编写servlet
WEB-INF/classes路径下编写ServletDemo.java文件

```java
package test.servlet;
import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class ServletDemo extends HttpServlet{
	@Override
	public void init() throws ServletException{
		
	}
	@Override
	public void service(HttpServletRequest req,HttpServletResponse res)throws ServletException{
		System.out.println("servletDemo被访问(服务器)");
	}
	@Override
	public void destroy(){
		
	}
}
```

#### 编译servlet
命令：`javac ServletDemo.java -d .`
#### 配置servlet
在WEB-INF/web.xml文件中添加

```
  <servlet>
	<servlet-name>servletDemo</servlet-name>
	<servlet-class>test.servlet.ServletDemo</servlet-class>
  </servlet>
  <servlet-mapping>
	<servlet-name>servletDemo</servlet-name>
	<url-pattern>/hello</url-pattern>
  </servlet-mapping>
```
#### 使用servlet
浏览器访问：`ip:port/项目路径/地址`

即：`http://127.0.0.1:8080/demo/hello`

结果：![image](image/servletDemo.png)

[FormData处理](https://www.cnblogs.com/liuyangv/p/8282437.html)
