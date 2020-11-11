# NISwitch
- [Functions](#Functions)
  * [niSwitch_init](#niSwitch_init)
  * [niSwitch_InitWithOptions](#niSwitch_InitWithOptions)
  * [niSwitch_InitWithTopology](#niSwitch_InitWithTopology)
  * [niSwitch_close](#niSwitch_close)
  * [ConfigurationFunctions](#ConfigurationFunctions)
  * [RouteFunctions](#RouteFunctions)
  * [ScanFunctions](#ScanFunctions)
  * [RelayOperation](#RelayOperation)
  * [Utility](#Utility)
  * [Values](#Values)
- [Attributes](#Attributes)
## Functions
### niSwitch_init
ViStatus niSwitch_init (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);

返回一个用于在之后所有仪器的驱动程序调用中标识开关模块的会话句柄。

|参数|类型|描述|有效值|
|:-:|:-:|:-:|:-:|
|resourceName|ViRsrc|初始化开关模块的资源名||
|idQuery|ViBoolean|**(忽略)** 是否询问安装哪个设备的开关模块|VI_TRUE VI_FALSE|
|resetDevice|ViBoolean|是否重置设备|VI_TRUE VI_FALSE|
|vi|ViSession|返回的会话句柄|&ViSessionName|

### niSwitch_InitWithOptions
ViStatus niSwitch_InitWithOptions (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);

返回一个用于在之后所有仪器的驱动程序调用中标识开关模块的会话句柄。

|参数|类型|描述|有效值|
|:-:|:-:|:-:|:-:|
|resourceName|ViRsrc|初始化开关模块的资源名||
|idQuery|ViBoolean|**(忽略)** 是否询问安装哪个设备的开关模块|VI_TRUE VI_FALSE|
|resetDevice|ViBoolean|是否重置设备|VI_TRUE VI_FALSE|
|optionString|ViConstString|||
|vi|ViSession|返回的会话句柄|&ViSessionName|

### niSwitch_InitWithTopology
ViStatus niSwitch_InitWithTopology (ViRsrc resourceName, ViConstString topology, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);

返回一个用于在之后所有仪器的驱动程序调用中标识开关模块的会话句柄,并设置拓扑结构。

|参数|类型|描述|有效值|
|:-:|:-:|:-:|:-:|
|resourceName|ViRsrc|初始化开关模块的资源名||
|topology|ViConstString|设备拓扑结构|niswitchTopologies.h定义|
|idQuery|ViBoolean|**(忽略)** 是否询问安装哪个设备的开关模块|VI_TRUE VI_FALSE|
|resetDevice|ViBoolean|是否重置设备|VI_TRUE VI_FALSE|
|vi|ViSession|返回的会话句柄|&ViSessionName|

### niSwitch_close
ViStatus niSwitch_close ( ViSession vi);

关闭会话句柄

### ConfigurationFunctions
### RouteFunctions
### ScanFunctions
### RelayOperation
#### niSwitch_GetRelayName

#### niSwitch_GetRelayCount
#### niSwitch_GetRelayPosition
#### niSwitch_RelayControl


### Utility
### Values


## Attributes
