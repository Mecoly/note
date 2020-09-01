# 可视化
库：wxPython

安装：pip install wxPython

引用：import wx

[文档](https://docs.wxpython.org/index.html)

目录：
* [结构](#结构)
* [app](#app)
* [窗口frame](#frame)
* [菜单Menu](#Menu)
* [状态StatusBar](#StatusBar)
* [对话框](#Dialog)
* [布局](#BoxSizer)
* [事件](#Event)
* [bitmap](#bitmap)
* []()
## 结构
顶层：

    wx.PopupWindow
    wx.ScrolledWindow
    wx.Frame
    wx.MDIParentFrame
    wx.MDIChildFrame
    wx.Dialog

容器：

    wx.Panel
    
动态：

静态：

其他：
## app
### 初始化操作
wx.App()
### 
MainLoop(self)
### 结束
可自动结束

结束函数

单个窗口：wx.Window.Close()

多个窗口：wx.Exit()

## frame
窗口，可调节大小

Frame()

Frame(parent, id=ID_ANY, title="", pos=DefaultPosition,
      size=DefaultSize, style=DEFAULT_FRAME_STYLE, name=FrameNameStr)

parent：父窗口，可缺省，如果有跟随父窗口最小化、关闭

id：标识，-1(默认)自动分配

title：标题显示在标题栏

pos：位置 Point(x,y) Point()<==>Point(0,0)

size：大小 Size(width, height)

style：窗口风格

    wx.DEFAULT_FRAME_STYLE: 默认定义 wx.MINIMIZE_BOX | wx.MAXIMIZE_BOX | wx.RESIZE_BORDER | wx.SYSTEM_MENU | wx.CAPTION | wx.CLOSE_BOX |     wx.CLIP_CHILDREN.
    wx.ICONIZE 最小化
    wx.CAPTION 标题，是使用wx.MINIMIZE_BOX, wx.MAXIMIZE_BOX 和 wx.CLOSE_BOX的前提。即最小化，最大化，关闭的载体
    wx.MINIMIZE：最小化-状态 与wx.ICONIZE相同
    wx.MINIMIZE_BOX：最小化-选项
    wx.MAXIMIZE：最大化-状态
    wx.MAXIMIZE_BOX：最大化-选项,需要使用wx.RESIZE_BORDER
    wx.CLOSE_BOX：关闭-选项
    wx.STAY_ON_TOP：保持在所有其他窗口的顶部，另请参见wx.FRAME_FLOAT_ON_PARENT
    wx.SYSTEM_MENU：在窗口标题栏中显示包含各种窗口命令列表的系统菜单
    wx.RESIZE_BORDER：手动调整窗口大小，默认不能调大小
    wx.FRAME_TOOL_WINDOW：创建一个带有小标题栏的框架；该框架不会出现在windows或gtk+下的任务栏中
    wx.FRAME_NO_TASKBAR：创建一个正常的frame，但它不会出现在windows或gtk+下的任务栏中（请注意，它将最小化到windows下的桌面窗口，这对用户来说可能很奇怪，因此最好只使用此样式而不使用wx.minimize_box样式）
    wx.FRAME_FLOAT_ON_PARENT：保持在父窗口窗口的顶部
    wx.FRAME_SHAPED：允许使用setshape方法更改其形状

name：窗口名

[方法](https://docs.wxpython.org/wx.Frame.html#method-summary-methods-summary)

显示：window.show()

## Panel
Panel()

Panel(parent, id=ID_ANY, pos=DefaultPosition, size=DefaultSize,
      style=TAB_TRAVERSAL, name=PanelNameStr)
## Menu
### 菜单栏
wx.MenuBar(self,style=0)

wx.MB_DOCKABLE 菜单可以拆分（wxGTK)
#### 添加菜单
Append(self, menu, title)

Insert(self, pos, menu, title)

pos：位置，0为最前
### 菜单选项
Menu()

Menu(style)

Menu(title, style=0)

style：wx.MENU_TEAROFF, 菜单可拆分(wxGTK only)
#### 添加菜单选项
Append (self, id, item, subMenu, helpString=””)

Insert (self, pos, id, text, submenu, help=””)
#### 添加菜单功能
Append (self, menuItem)

Append (self, id, item=””, helpString=””, kind=ITEM_NORMAL)

Insert (self, pos, menuItem)

Insert (self, pos, id, item=””, helpString=””, kind=ITEM_NORMAL)
### 菜单功能
MenuItem(parentMenu=None, id=ID_SEPARATOR, text="",
         helpString="", kind=ITEM_NORMAL, subMenu=None)

id：[官方](https://docs.wxpython.org/stock_items.html#phoenix-title-stock-items)

style：

绑定事件：

Frame.Bind(wx.EVT_MENU,event_funct,MenuItem)

[官方位图](https://docs.wxpython.org/wx.ArtProvider.html#phoenix-title-identifying-art-resources)
## StatusBar
### 状态栏
StatusBar()

StatusBar(parent, id=ID_ANY, style=STB_DEFAULT_STYLE,
          name=StatusBarNameStr)

SetFieldsCount(self, number=1, widths=None)

SetStatusWidths(self, widths)

SetStatusText(self, text, i=0)
### 
## Dialog
### Dialog
### MessageDialog
### AboutBox

#### 创建
MessageDialog(parent, message, caption=MessageBoxCaptionStr,
              style=OK|CENTRE, pos=DefaultPosition)
#### 显示
md.ShowModal()
## BoxSizer
### 创建
wx.BoxSizer(orient = HORIZONTAL)

orient：

wx.VERTICAL 控件垂直排列

wx.HORIZONTAL 控件水平排列
### 添加
    Add (self, window, flags)
    Add (self, window, proportion=0, flag=0, border=0, userData=None)
    Add (self, sizer, flags)
    Add (self, sizer, proportion=0, flag=0, border=0, userData=None)
    Add (self, width, height, proportion=0, flag=0, border=0, userData=None)
    Add (self, width, height, flags)
    Add (self, item)
    Add (self, size, proportion=0, flag=0, border=0, /Transfer/=None)
    Add (self, size, flags)

flags：

    边框宽度
    wx.TOP
    wx.BOTTOM
    wx.LEFT
    wx.RIGHT
    wx.ALL
    部件展开
    wx.EXPAND	填充
    wx.SHAPED   保持其纵横比
    最小大小
    wx.FIXED_MINSIZE
    保留隐藏的组件的空间
    wx.RESERVE_SPACE_EVEN_IF_HIDDEN
    对齐方式
    wx.ALIGN_CENTER or wx.ALIGN_CENTRE
    wx.ALIGN_LEFT
    wx.ALIGN_RIGHT
    wx.ALIGN_RIGHT
    wx.ALIGN_TOP
    wx.ALIGN_BOTTOM
    wx.ALIGN_CENTER_VERTICAL or wx.ALIGN_CENTRE_VERTICAL
    wx.ALIGN_CENTER_HORIZONTAL or wx.ALIGN_CENTRE_HORIZONTAL
    
proportion：
比例

broader：

userData：
## Event
Bind(self, event, handler, source=None, id=wx.ID_ANY, id2=wx.ID_ANY)

## bitmap
创建wx.Bitmap对象

wx.Bitmap('url')
### 静态图片
StaticBitmap()

StaticBitmap(parent, id=ID_ANY, bitmap=NullBitmap, pos=DefaultPosition,
             size=DefaultSize, style=0, name=StaticBitmapNameStr)

修改图片

SetBitmap(self, label)
### 读取图片

