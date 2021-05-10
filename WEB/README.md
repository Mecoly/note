# WEB

* [B/S架构](#B/S架构)
* [组成](#组成)
  - [浏览器端](#浏览器端)
    * [HTML](HTML)
    * [CSS](CSS)
    * [JavaScript](JavaScript)
  - [服务器端](#服务器端)
    * [Apache](#Apache)
    * [Tomcat](#Tomcat)
  - [中间件](#中间件)
  
## B/S架构
B/S架构即浏览器和服务器架构模式（Browser/Server，浏览器/服务器）

组成：浏览器端、服务器端、中间件

## 组成

### 浏览器端

#### HTML

#### CSS

#### JavaScript

### 服务器端
#### Apache
添加虚拟路径：修改httpd.conf文件

`vim /etc/httpd/conf/httpd.conf`

文件最后添加

```
Alias /test/ "/var/wwwtest/"
<Directory "/var/wwwtest/">
    Options Indexes FollowSymLinks
    AllowOverride None
    Require all granted
    Order allow,deny
    Allow from all
</Directory>
```

因为selinux开启，所以需要修改目录的安全上下文为http模式

```
semanage fcontext -a -t httpd_sys_content_t '/var/wwwtest(/.*)?'
restorecon -RvvF /var/wwwtest/
```

重启服务

`service httpd restart`

#### Tomcat

### 中间件
