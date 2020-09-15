# HTML5
* [基本结构](#基本结构)
* [基本元素](#基本元素)
* [基本属性](#基本属性)
* [头部元素](#头部元素)
* [文本语义元素](#文本语义元素)
* [组合元素](#组合元素)
  - [注释(注音)](#注释)
  - [列表](#列表)
  - [表格](#表格)
  - [结构](#结构)
  - [表单](#表单)
* [复杂元素](#复杂元素)
  - [超链接](#超链接)
  - [框架](#框架)
  - [图片](#图片)
  - [音频](#音频)
  - [视频](#视频)
* [绘图](#绘图)

## 基本结构
```
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
        <meta name="viewport" content="width=device-width,initial-scale=1.0,minimum-scale=1.0,maxmum-scale=1.0"/>
        <script src="test.js"/>
        <link type="text/css" rel="stylesheet" href="test.css"/>
        <link rel="icon" href="test.ico"/>
        <title>标题</title>
    </head>
    <body>
        <!--内容-->
    </body>
</html>
```
## 基本元素

|基本元素|元素名|备注|
|:-:|:-:|:-:|
|`<!-- -->`|注释||
|`<html>`|根元素||
|`<head>`|头部||
|`<title>`|标题||
|`<body>`|主体||
|`<h1>`~`<h6>`|标题||
|`<div>`|节||
|`<hr>`|水平线|空元素|
|`<br>`|换行|空元素|
|`<p>`|段落||
|`<span>`|一般文本|不换行|

## 基本属性

|属性|功能|值|
|:-:|:-:|:-:|
|id|标识符||
|style|CSS样式||
|class|CSS样式的class选择器||
|dir|元素排列方式|ltr rtl|
|title|额外信息||
|lang|内容使用语言|zh en fr ja|
|accesskey|快捷键||
|tabindex|table切换|-1(无) 1 2 3...|
|contentEditable|编辑内容|boolean|
|designMode|设置全局编辑|on off|
|hidden|隐藏|boolean|
|spellcheck|检查拼写|boolean|

## 头部元素
|头部元素|元素名|备注|
|:-:|:-:|:-:|
|`<script>`|脚本||
|`<noscript>`|不支持JS脚本的提示信息||
|`<style>`|CSS样式||
|`<link>`|链接图标、CSS等外部资源||
|`<title>`|文档标题|id作为唯一标识|
|`<base>`|指定链接基准路径||
|`<meta>`|元数据||
### script元素
|link元素属性|作用|
|:-:|:-:|
|||
|defer|推迟执行|
|async|异步执行|
|||

### link元素
|link元素属性|作用|
|:-:|:-:|
|href|链接资源url|
|hreflang|资源语言|
|media|资源适用设备|
|rel|文档与资源关系|
|sizes|图标大小|
|type|MIME类型|

|rel属性值|含义|
|:-:|:-:|
|alternate|本文档替代版本|
|author|文档作者|
|copyright|版权信息|
|help|帮助|
|icon|图标|
|license|授权信息|
|prefetch|预先加载资源|
|stylesheet|外部样式单|

### base元素
|base元素属性|作用|
|:-:|:-:|
|href|链接基准路径|
|target|打开链接窗口|
### meta元素

|meta元素属性|作用|
|:-:|:-:|
|http-equiv|源信息名称|
|name|源信息名称|
|content|源信息值|
|charset|设置页面字符集|

|rel属性值|含义|
|:-:|:-:|
|expires|网页过期时间|
|pragma|禁止浏览器从本地磁盘缓存获取页面内容|
|refresh|自动刷新页面|
|set-cookie|设置Cookie|
|content-type|设置页面字符集|

## 文本语义元素
|文本语义元素|元素名|备注|
|:-:|:-:|:-:|
|`<b>`|粗体||
|`<i>`|斜体||
|`<em>`|强调||
|`<strong>`|粗体||
|`<small>`|小号||
|`<sup>`|上标||
|`<sub>`|下标||
|`<bdo>`|显示方向|dir属性:ltr rtl|
|`<abbr>`|缩写|title属性:全称|
|`<address>`|地址|斜体|
|`<blockquote>`|长引用文本|缩进|
|`<q>`|短引用文本|引号|
|`<cite>`|作品标题|斜体|
|`<code>`|计算机代码|小字体 无缩进|
|`<dfn>`|专业术语|斜体|
|`<del>`|删除文本|水平删除线|
|`<ins>`|插入文本|下划线|
|`<pre>`|预格式化|保留缩进|
|`<samp>`|示范文本|小字体|
|`<kbd>`|键盘文本|小字体|
|`<var>`|变量|斜体|
|`<mark>`|重点|荧光背景|
|`<time>`|日期事件||
|`<bdi>`|隔离||
|`<wbr>`|换行建议||
|`<details>`|详细信息(摘要)||
|`<summary>`|摘要|点击显示/隐藏详细|
|`<ruby>`|注释|容器|
|`<rb>`|解释部分||
|`<rt>`|说明部分||
|`<rtc>`|rt的容器 ruby的元素|
|`<rp>`|注释备用文本||

## 组合元素
### 注释
|注释元素|元素名|备注|
|:-:|:-:|:-:|
|`<ruby>`|注释|容器|
|`<rb>`|解释部分||
|`<rt>`|说明部分||
|`<rtc>`|rt的容器 ruby的元素|
|`<rp>`|注释备用文本||
```
<ruby>
    <rb>毂</rb><rt>gǔ</rt>
    <rb>躐</rb><rt>lèi</rt>
</ruby>
<ruby>
    <rb>毂<rt>gǔ</rt></rb>
    <rb>躐<rt>lèi</rt></rb>
</ruby>
```
### 列表
|列表元素|元素名|
|:-:|:-:|
|`<ul>`|无序列表|
|`<ol>`|有序列表|
|`<li>`|列表项|
|`<dl>`|术语列表|
|`<dt>`|标题列表|
|`<dd>`|普通列表项|
### 表格
|表格元素|元素名|
|:-:|:-:|
|`<table>`|表格|
|`<caption>`|标题|
|`<tr>`|表格行|
|`<td>`|单元格|
|`<th>`|表头单元格|
|`<tbody>`|表格主体|
|`<thead>`|表格头|
|`<tfoot>`|表格脚|
|`<col>`|列属性|
|`<colgroup>`|列属性|
### 结构
|结构元素|元素名|
|:-:|:-:|
|artcle|文章/附属文章|
|header|标题|
|footer|脚注|
|section|分段|
|article|附属文章|
|nav|导航|
|aside|附加信息|
|main|网页主体 最多一个|

### 表单
|元素|功能|
|:-:|:-:|
|form|表单|
|input|输入|
|label|标签|
|button|按钮|
|select|列表框或下拉菜单|
|option|列表项菜单项|
|textarea|多行文本域|
|fieldset|表单内分组|
|legend|分组标题|
|output|显示输出|
|meter|仪表|
|progress|进度条|

|form属性|功能|值|
|:-:|:-:|:-:|
|action|提交地址||
|method|请求类型|post get|
|name|表单名称|建议与id相同|
|target|何种方式打开|\_blank \_parent \_self \_top|
|entype|字符集||

|form子元素属性|功能|值|
|:-:|:-:|:-:|
|form|指定form||
|formxxx|form的xxx属性|xxx值|
|autofocus|自动焦点||
|placeholder|未输入文本提示||
|list|文本列表|datalist-id|
|autocomplete|自动完成|on off|
|required|必须填写|required或省略|
|pattern|约束|正则表达式|
## 复杂元素
### 超链接
`<a>`:超链接

属性：href hreflang target download type media

href：url地址 scheme://host.domain:port/path/filename

|scheme|对应资源|
|:-:|:-:|
|file|本地磁盘上的文件|
|ftp|FTP服务器上的文件|
|http|WWW服务器上的文件|
|news|新闻组上的文件|
|telnet|Telnet连接|
|gopher|Gopher服务器上的文件|

hreflang：超链接所链接的文档所使用的语言

|target|访问资源框架位置|
|:-:|:-:|
|\_self|自身|
|\_blank|新窗口|
|\_top|顶层框架|
|\_parent|父框架|

download：下载资源默认文件名

type：[MIME_type](https://www.w3school.com.cn/media/media_mimeref.asp)

media

### 框架
`<iframe>`:框架

|属性|含义|值|
|:-:|:-:|:-:|
|src|装载页面|URL|
|name|框架名|框架名|
|longdesc|关于该iframe长描述|URL|
|scrolling|是否显示滚动条|yes no auto|
|height|高度||
|width|宽度||
|frameborder|是否显示边框|1 0|
|marginheight|顶部底部页边距||
|marginwidth|左侧右侧页边距||
|sandbox|限制|
|seamless|看上去像是包含文档的一部分|
|srcdoc|显示在框架中的 HTML 内容|
### 图片
`<img>`:图片

|属性|含义|值|
|:-:|:-:|:-:|
|src|文件位置||
|alt|提示信息||
|height|高度|像素值/百分比|
|width|宽度|像素值/百分比|
|usemap|分区链接|#mapname|
|ismap|提交点击图片坐标|boolean|

|元素||
|:-:|:-:|
|map|定义图片映射|
|area|映射内部区域|

|target属性|含义|
|:-:|:-:|
|shape|区域图形|
|coords|坐标值|
|href|链接资源|
|alt|提示信息|
|target|装载资源|

|元素||
|:-:|:-:|
|figure|图片区域|
|figcaption|图片区域标题|

### 音频
```
<audio src="">
</audio>
```

|属性|作用|值|
|:-:|:-:|:-:|
|src|音频文件|URL|
|autoplay|自动播放|true 指定会忽略预加载|
|controls|播放控制条|true|
|loop|循环|true|
|preload|预加载|auto metadata(预加载数据) none|

### 视频
```
<video src="">
</video>
```

|属性|作用|值|
|:-:|:-:|:-:|
|src|视频文件|url|
|autoplay|自动播放|true 指定会忽略预加载|
|controls|播放控制条|true|
|loop|循环|true|
|preload|预加载|auto metadata(预加载数据) none|
|poster|视频播放前后显示图片|url|
|width|视频播放器宽度||
|height|视频播放器宽度||

## 绘画
