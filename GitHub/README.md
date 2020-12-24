# GitHub

* [GitHub版本](#GitHub版本)
* [GitHub使用](#GitHub使用)
  - [repository](#repository)
  - [md文件格式](#md文件格式)
* [GitHub Desktop使用](#GitHub使用)
* [Git使用](#Git使用)
  - [获取SSH公钥](#获取SSH公钥)
  - [下载](#下载)
  - [上传](#上传)

## GitHub版本

官网首页：[GitHub](https://github.com/)

桌面软件：[GitHub Desktop](https://desktop.github.com/)

版本控制工具：[Git](https://git-scm.com/)
## GitHub使用

### repository
.gitignore ：[github/gitignore](https://github.com/github/gitignore) [gitignore.io](https://www.gitignore.io/)
### md文件格式
|语法|格式||
|:-:|:-:|:-:|
|**粗体**|`**粗体**`||
|*斜体*|`*斜体*`||
|~~删除~~|`~~删除~~`||
|`代码`|\`代码\` \`\`\`代码\`\`\`|可跨行，跨行时第一个符号后可备注代码语言，不显示|
|标题|`# 一级标题`|`#`-`######`:一级标题-六级标题|
|无序列表|`* 无序列表` `- 无序列表`|`*` `-`|
|有序列表|`1. 第一项`||
|分割线|`***` `---`||
|引用|`> 引用`||
|[链接说明](https://m.tb.cn/h.46TGL8y)|`[链接说明](URL)`|`URL:#标题名`导航至标题|
|![图片加载失败显示文字](https://github.com/fluidicon.png)|`![图片加载失败显示文字](URL)`||

## GitHub使用

## Git使用

### 获取SSH公钥
设置邮箱：

`git config --global user.email "email@example.com"`

设置name：

`git config --global user.name "name"`

生成密钥：

`ssh-keygen -t rsa -C "email@example.com"`

绑定密钥：将.ssh/id_rsa.pub中的内容复制到GitHub或Gitee账号

查看设置：`git config --list`

### 下载
选择保存位置：`cd /d/project`

下载：`git clone [url]`

更新：`git pull`
### 上传
检查状态：`git status`

根据提示更新

添加：`git add <file>`

删除：`git add <file>`

取消：`git checkout -- <file>`

提交：`git commit -m "commit message"`

上传：`git push origin`
