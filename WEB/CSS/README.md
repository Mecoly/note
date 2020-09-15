# CSS

* [基本使用](#基本使用)
  - [引入外部样式文件](#引入外部样式文件)
  - [导入外部样式单](#导入外部样式单)
  - [使用内部CSS样式](#使用内部CSS样式)
  - [使用行内样式](#使用行内样式)
* [CSS样式语法](#CSS样式语法)
* [CSS选择器](#CSS选择器)
  - [元素选择器](#元素选择器)
  - [属性选择器](#属性选择器)
  - [ID选择器](#ID选择器)
  - [class选择器](#class选择器)
  - [包含选择器](#包含选择器)
  - [子选择器](#子选择器)
  - [兄弟选择器](#兄弟选择器)
  - [选择器组合](#选择器组合)
* [伪元素选择器](#伪元素选择器)
  - [内容相关](#内容相关)
* [字体与文本相关属性](#字体与文本相关属性)
  - [字体](#字体)
  - [颜色](#颜色)
  - [文本](#文本)
  - [新增字体](#新增字体)
* [背景边框](#背景边框)
  - [盒模式](#盒模式)
  - [背景](#背景)
  - [边框](#边框)
* [大小定位轮廓](#大小定位轮廓)
  - [大小](#大小)
  - [定位](#定位)
  - [轮廓](#轮廓)
* [盒模型](#盒模型)
  - [布局](#布局)
  - [盒模型类型](#盒模型类型)
  - [盒模型阴影](#盒模型阴影)
  - [多栏布局](#多栏布局)
  - [弹性盒](#弹性盒)
* [表格列表](#表格列表)
  - [表格](#表格)
  - [列表](#列表)
  - [光标](#光标)
  - [响应式布局](#响应式布局)
* [变形动画](#变形动画)

## 基本使用
### 引入外部样式文件
在`<head.../>`中增加`<link.../>`子元素

`<link type="text/css" rel="stylesheet" href="URL"/>`
### 导入外部样式单
```
<style type="text/css" media="">
    @import "[url]";
</style>
```

### 使用内部CSS样式
```
<style type="text/css">
    <!--CSS定义-->
</style>
```
### 使用行内样式
```
<div style="<!--CSS定义-->">
    内容
</div>
```
## CSS样式语法
```
Selector{
    property:value;
    property1:value1;
}
```

Selector(选择器)

{property:value;...}(属性定义)

## CSS选择器
### 元素选择器
`E{...}`

E：有效的HTML元素名。“\*”代表任意元素
### 属性选择器
|属性选择器|作用|
|:-:|:-:|
|`E{...}`|所有E元素|
|`E[attr]{...}`|有attr属性的E元素|
|`E[attr=value]{...}`|有attr属性且值为value的E元素|
|`E[attr ~=value]{...}`|有attr属性且attr值以空格分隔开的系列值，其中某个值为value的E元素|
|`E[attr \|=value]{...}`|有attr属性且attr值以连字符分隔开的系列值，其中第一个值为value的E元素|
|`E[attr^=value]{...}`|有attr属性且值以value开头的E元素|
|`E[attr$=value]{...}`|有attr属性且值以value结尾的E元素|
|`E[attr*=value]{...}`|有attr属性且值包含value的E元素|

### ID选择器
`[E]#idValue{...}`
### class选择器
`[E].classValue{...}`
### 包含选择器
`Selector1 Selector2{...}`
### 子选择器
`Selector1>Selector2{...}`
### 兄弟选择器
`Selector1 ~ Selector2{...}`
### 选择器组合
`Selector1,Selector2,Selector3{...}`

## 伪元素选择器

|选择器|作用|
|:-:|:-:|
|`:first-letter`|第一个字符|
|`:first-line`|第一行内容|
|`:before`|前端插入内容|
|`:after`|尾端插入内容|

### 内容相关
|选择器|作用|值|
|:-:|:-:|:-:|
|content|插入内容|字符串 url(url)等|
|quotes|在前后插入内容|字符串|
|counter-increment|计数器|计数器名称|
|counter-reset|计数器复位||

`counter(name,list-style-type)`

|值|作用|
|:-:|:-:|
|decimal|阿拉伯数字(默认)|
|disc|实心圆|
|circle|空心圆|
|lower-roman|小写罗马数字|
|upper-roman|大写罗马数字|
|lower-alpha|小写英文字母|
|upper-alpha|大写英文字母|
|none|不使用项目符号|
|cjk-ideographic|浅白的表意数字|
|georgian|传统的乔治数字|
|lower-greek|希腊小写字母|
|hebrew|传统的希伯莱数字|
|hiragana|日文片假名字符|
|hiragana-iroha|日文片假名序号|
|katakana|日文片假名字符|
|katakana-iroha|日文片假名序号|
|lower-latin|小写拉丁字母|
|upper-latin|大写拉丁字母|

## 字体与文本相关属性
### 字体
|属性|作用|值|
|:-:|:-:|:-:|
|color|文字颜色||
|font-family|字体|,分割|
|font-size|字体大小|xx-small x-small small medium large x-large xx-large larger smaller length|
|font-size-adjust|字体大小微调||
|font-stretch|文字横向拉伸|normal narrower wider|
|font-style|文字斜体风格|normal italic oblique|
|font-weight|加粗|lighter normal bold bolder 100,200...900|
|text-decoration|修饰线|none blink underline line-through overline|
|font-variant|大写字母格式|normal small-caps|
|text-shadow|阴影效果|color xoffset yoffset radius 多个阴影“,”分割|
|text-transform|大小写|none capitalize uppercase lowercase|
|line-height|字体行高||
|letter-spacing|字符间隔|normal 数值+长度单位|
|word-spacing|单词间隔|normal 数值+长度单位|

### 颜色
颜色名：white red gold

十六进制：#000000 #ffffff 红绿蓝

RGB：rgb(0,0,0) rgb(255,255,255)

HSL：色调(0红 120绿 240蓝) 饱和度 亮度

RGBA：rgba(r,g,b,a) a：透明度0~1

HSLA：

### 文本
|属性|作用|值|
|:-:|:-:|:-:|
|text-indent|段落文本缩进|0(默认)|
|text-overflow|溢出文本处理|clip:简单裁切 ellipsis溢出标记|
|vertical-align|垂直对齐方式|auto baseline sub super top middle bottom length|
|text-align|水平对齐方式|left right center justify|
|direction|文本方向|ltr rtl|
|white-space|空白处理方式|normal pre nowrap pre-wrap pre-line inherit|
|word-break|换行方式|normal keep-all break-all|
|word-wrap|换行方式|normal break-word|

### 新增字体
```
@font-face{
    font-family:name;
    src:url(url) format(fontformat);
    sRules
}
```
## 背景边框
### 盒模式
内容区(content) 内填充区(padding) 边框区(border) 外边距区(margin)

![盒模型](image/盒模型.png)
### 背景
|属性|作用|值|
|:-:|:-:|:-:|
|background-color|背景色|[color](#颜色)|
|background-image|背景图片|URL(URL)|
|background-repeat|平铺|repeat no-repeat repeat-x repeat-y round space|
|background-attachment|背景滚动|scroll fixed|
|background-position|背景位置|长度值 百分比|
|background-clip|背景覆盖范围|content-box padding-box border-box no-clip|
|background-origin|背景覆盖起始位置|content-box padding-box border-box|

背景渐变：`background:linear-gradient(方向,颜色列表)`

方向：to top、to bottom、to left、to right、to left top、to right top、to left bottom、to right bottom、Ndeg(0deg表示12点方向)

循环线性渐变：`repeat-linear-gradient`

径向渐变：`radial-gradient([形状] [大小] at x y,颜色列表)`

循环径向渐变：`repeat-radial-gradient([形状] [大小] at x y,颜色列表)`

### 边框
|属性|作用|值|
|:-:|:-:|:-:|
|border|边框样式|粗细 线型 颜色|
|border-color|颜色||
|border-style|线型|none hidden dotted dashed solid double groove ridge inset outset|
|border-width|粗细|宽度|
|border-(top/bottom/right/left)-(color/style/width)|粗细|宽度|
|border-(top/bottom/right/left)-colors|边框渐变|颜色列表“ ”分隔|
|border-radius|圆角边框|圆角半径|
|border-image|图片边框|`<border-image-source><border-image-slice>[<border-image-width>]<border-image-repeat>`|
|opacity|透明度|0~1|

|属性|作用|值|
|:-:|:-:|:-:|
|padding|距离|长度|
|padding-(top/bottom/right/left)|距离|长度|
|margin|距离|长度|
|margin-(top/bottom/right/left)|距离|长度|

## 大小定位轮廓
### 大小
|属性|作用|值|
|:-:|:-:|:-:|
|height|高度|距离|
|max-height|最大高度|距离|
|min-height|最小高度|距离|
|width|宽度|距离|
|max-width|最大宽度|距离|
|min-width|最小宽度|距离|
|box-sizing|height、width作用区域|content-box border-box inherit|
|resize|拖动改变大小|none both horizontal vertical inherit|

calc：HTML大小

### 定位
|属性|作用|值|
|:-:|:-:|:-:|
|position|定位方式|static(默认) fixed(浏览器) relative(正常偏移) absolute(绝对定位) sticky(粘性定位)|
|z-index|层序||
|top/right/bottom/left|相对父对象偏移||

### 轮廓
|属性|作用|值|
|:-:|:-:|:-:|
|outline|轮廓复合属性|颜色、线型、线宽|
|outline-color|颜色||
|outline-style|线型|none dotted dashed|
|outline-width|宽度||
|outline-offset|偏移||

### 滤镜
|属性|作用|值|
|:-:|:-:|:-:|
|blur|模糊|(Npx)|
|brightness|高亮|(%)|
|contrast|对比度|(%)|
|drop-shadow|阴影|(xoffset,yoffset,radius,color)|
|grayscale|灰度|(0%~100%)|
|hue-ratate|色调旋转|(Ndeg)|
|invert|色彩反转|(0%~100%)|
|opacity|透明度|(0%~100%)|
|saturate|饱和度|(%)|
|sepia|褐色|(0%~100%)|

## 盒模型
### 布局

|属性|作用|值|
|:-:|:-:|:-:|
|float|浮动|left right|
|clear|清除浮动|none|
|clip|裁剪|auto rect|
|overflow|不够容纳内容显示方式|visible auto hidden scroll|
|overflow-x|不够容纳内容水平显示方式|同overflow|
|overflow-y|不够容纳内容垂直显示方式|同overflow|
|overflow-style|不够容纳内容滚动方式|auto scrollbar panner move marquee|
|display|盒模型类型|[display属性](#盒模型类型)|
|visibility|显示|visible hidden|

### 盒模型类型
display属性

|值|作用|
|:-:|:-:|
|none|隐藏,不占据空间|
|block|默认占据一行|
|inline|默认不占据一行|
|inline-block|列排序 vertical-align对齐方式|
|inline-table|inline的table|
|table|表格|
|table-caption|表格标题|
|table-cell|单元格|
|table-column|表格列|
|table-column-group|表格列组|
|table-header-group|表格头|
|table-footer-group|表格页脚|
|table-row|表格行|
|table-row-group|表格行组|
|list-item|列表|
|flex|弹性盒布局|

### 盒模型阴影
`box-shadow:hOffset vOffset blurLength spread color inset`

|属性值|作用|
|:-:|:-:|
|hOffset|水平偏移|
|vOffset|垂直偏移|
|blurLength|模糊程度|
|spread|缩放程度|
|color|颜色|
|inset|外部阴影改为内部阴影|

### 多栏布局
|属性|作用|值|
|:-:|:-:|:-:|
|columns|分栏复合属性|栏目宽度 栏目数|
|column-width|宽度|长度值|
|column-count|栏目数|整数值|
|column-rule|分隔条复合属性|宽度 样式 颜色|
|column-rule-width|宽度|长度值|
|column-rule-style|样式||
|column-rule-color|颜色|颜色|
|column-gap|栏目间距|长度值|
|column-fill|栏目高度|auto balance|
|column-span|元素横跨列数||

### 弹性盒
|属性|作用|值|
|:-:|:-:|:-:|
|flex-flow|弹性盒容器|排列方式 换行方式|
|flex-direction|父容器 子元素排列方式|row row-reverse column column-reverse|
|flex-wrap|父容器 子元素换行方式|nowrap wrap wrap-reverse|
|order|子元素 显示顺序|order:1~N|
|flex|子元素 父容器内空间分配|flex-grow flex-shrink flex-basis|
|align-items|父容器 子元素垂直方向对齐方式|flex-start flex-end center baseline stretch|
|align-self|子元素 自身垂直方向对齐方式|同上|
|justify-content|弹性盒容器 排列方向分布方式|flex-start flex-end center space-between space-around|
|align-content|弹性盒容器 垂直方向分布方式|同上|

## 表格列表
### 表格
|属性|作用|值|
|:-:|:-:|:-:|
|border-collapse|边框合并|seperate collapse|
|border-spacing|单元格边框边距||
|border-side|标题位置|top bottom left right|
|empty-cells|无内容时显示边框|show hide|
|table-layout|宽度布局|auto fixed|

### 列表
|属性|作用|值|
|:-:|:-:|:-:|
|list-style|列表风格|图片 位置 样式|
|list-style-image|图片||
|list-style-position|位置||
|list-style-type|样式||

### 光标
|cursor属性值|作用|
|:-:|:-:|
|all-scroll|十字箭头光标|
|col-resize|水平拖动线光标|
|crosshair|十字线光标|
|move|移动十字箭头光标|
|help|带问好的箭头光标|
|no-drop|禁止光标|
|not-allowed|禁止光标|
|pointer|手形光标|
|progress|带进度环的箭头光标|
|row-resize|垂直拖动线光标|
|text|文本编辑光标|
|vertical-text|文本编辑光标|
|wait|进度环光标|
|\*-resize|可在各种方向上拖动的光标|

### 响应式布局
`@media not|only 设备类型 [and 设备特性]*`

|设备类型|含义|
|:-:|:-:|
|screen|计算机屏幕|
|tty|等宽字符的显示设备|
|tv|电视机类型的显示设备|
|projection|投影仪|
|handheld|手持设备|
|print|打印页面或打印预览模式|
|embossed|凸点字符(盲文)印刷设备|
|braille|盲人点字法反馈设备|
|aural|语音合成器|
|all|全部设备|

|特征|含义|值|min/max前缀|
|:-:|:-:|:-:|:-:|
|width|宽度|长度值|是|
|height|高度|长度值|是|
|aspect-ratio|比例|比例值。如16/9|是|
|device-width|分辨率宽度|长度值|是|
|device-height|分辨率高度|长度值|是|
|device-aspect-ratio|分辨率比例|比例值。如16/9|是|
|color|色深|整数值|是|
|color-index|颜色数|整数值|是|
|monochrome|每像素位数|整数值|是|
|resolution|物理分辨率|分辨率值|是|
|scan|设备扫描方式|progressive interlace|否|
|grid|设备是否基于栅格的|0 1|否|

## 变形动画
