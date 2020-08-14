# 机器学习-ML(Machine Learning)

[基本概念](#机器学习)

[深度学习](DL)

## 机器学习

http://speech.ee.ntu.edu.tw/~tlkagk/courses_ML20.html

1. 机器学习就是自动找函数

语音识别（Speech Recognition）： f(语音)="文字意思"

图像识别（Image Recognition）： f(图片)="是什么"

下棋(Playing Go)： f(棋盘状态)="落子位置"

对话系统（Dialogue System）： f(对话)="回应"

2. 找什么样的函数-输出什么

数值：回归-Regression

选择：分类-Classification -> 卷积神经网络-CNN(Convolutional Neural Networks)

创造：生成-Generation -> 循环神经网络-RNN(Recurrent Neural Network) 生成对抗网络-GAN(Generative Adversarial Networks)

3. 怎么告诉机器什么样的函数

数据-标记：监督学习-Supervised Learning

数据-无标记：监督学习-Unsupervised Learning -> 生成对抗网络-GAN(Generative Adversarial Networks)

评价函数：损失函式-Loss

机器自动找出Loss最小的函数：

回报（Reward）：强化学习-RL(Reinforcement Learning)

架构确定：RNN-CNN

函数确定：梯度下降(Gradient Descent)

