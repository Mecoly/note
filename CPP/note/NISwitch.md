#NISwitch
- [Functions](#Functions)
  * [niSwitch_init](#niSwitch_init)
  * [niSwitch_initWithOptions](#niSwitch_initWithOptions)
  * [niSwitch_initWithTopology](#niSwitch_initWithTopology)
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

用途：

返回一个用于在之后所有仪器的驱动程序调用中标识开关模块的会话句柄。

niSwitch_init为resourceName参数中指定的交换机模块创建一个新的IVI仪器驱动程序会话。如果多个拓扑对该设备有效，则NI-SWITCH使用MAX中指定的默认拓扑。



默认情况下，开关模块重置为已知状态。



如果另一个进程中存在与指定资源的会话，则返回错误。如果在同一进程中对具有相同拓扑的同一资源调用niSwitch_init两次，则返回相同的会话。

### niSwitch_initWithOptions
### niSwitch_initWithTopology
### niSwitch_close
### ConfigurationFunctions
### RouteFunctions
### ScanFunctions
### RelayOperation
### Utility
### Values


## Attributes
