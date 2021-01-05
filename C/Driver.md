# Driver
* [Windows](#Windows)
  - [基础知识](#基础知识)
* [Linux](#Linux)

## Windows
### 基础概念
**用户模式和内核模式**

用户模式虚拟地址空间为专用空间，无法访问操作系统保留的虚拟地址

内核模式共享单个虚拟地址空间

**设备**

设备由即插即用-PnP(Plug and Play)设备树中的设备节点表示，每个设备结点都有自己的设备堆栈，设备堆栈为(设备对象，驱动程序)对的有序列表

设备节点可以理解为设备或总线

设备对象是 DEVICE_OBJECT 结构的实例，与一个驱动程序相关联

总线驱动枚举连接到总线的设备，并为每个设备创建一个设备对象，称为物理设备对象-PDO(physical device object)

创建PDO后搜寻合适的驱动程序，创建设备对象组成设备堆栈，设备堆栈中有一个功能驱动程序(function driver)和一个或多个筛选驱动程序(filter)，功能驱动程序负责读、写和设备控制请求，筛选驱动程序负责辅助，功能驱动程序创建功能设备对象-function device object(FDO)，筛选驱动程序创建筛选设备对象-filter device object(Filter DO)。

**I/O请求数据包**

发送到设备驱动的请求打包在I/O请求数据包-I/O request packet(IPR)中，使用IoCallDrive发送IRP。

IRP由设备堆栈处理时，先由顶部设备对象处理，处理不了的部分转发给低层设备对象。

#### 设备

## Linux
