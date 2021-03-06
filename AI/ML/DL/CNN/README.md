# 卷积神经网络-CNN(Convolutional Neural Networks)

卷积神经网络:CNN(Convolutional Neural Networks)简称ConvNets

[引入](#Why-CNN-for-image)

[CNN架构](#The-whole-CNN)

* [卷积层(Convolution)](#Convolution)

* [最大池化(Max Pooling)](#Max-Pooling)

* [拉平(Flatten)](#Flatten)

* [全连接神经网络(Fully Connected Feedforward Network)](#Fully-Connected-Feedforward-Network)

[应用](#Application)

影像处理

## Why CNN for image

1.  图片特征(pattern)只需要看一部分

2.  某个图片特征存在与不同区域(region)

3.  图片可以进行下采样(subsampling)

## The whole CNN

图片->输入层->{`卷积(Convolution)->最大池化(Max Pooling)` X N}->Flatten(拉成一维)->全连接层

卷积(Convolution)解决1. 2. 池化(Max Pooling)解决3.

### Convolution

Filter(卷积核/滤波器)：与输入数据矩阵比，长宽小，层数相同的矩阵 参数通过训练得到 多个Filter

计算过程：移动步长(stride)求内积，获得矩阵；跟每个卷积核运算得到多个矩阵，组成Feature Map

### Max Pooling

将整个图片分割成不重叠的若干个同样大小的小块（pooling size），每个小块内只取最大的数字

得到深度为Filter个数

### Flatten

参数拉成一维

### Fully Connected Feedforward Network

## Application

### Playing Go

无Max Pooling

### Speech

语谱图(Spectrogram)->内容

![Speech](image/Speech.png)

### Text

文本(Text)->内容

![Text](image/Text.png)
