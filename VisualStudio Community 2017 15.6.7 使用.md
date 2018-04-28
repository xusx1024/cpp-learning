* [常见问题](#常见问题)
  * [新建工程](#新建工程)
  * [无法查找或打开PDB文件](#无法查找或打开PDB文件)
  * [设置`cl.ext`环境变量](#设置`cl.ext`环境变量)
  * [cl命令编译cpp文件遇到的问题](#cl命令编译cpp文件遇到的问题)
    * [LINK : fatal error LNK1104: 无法打开文件“uuid.lib”](#LINK : fatal error LNK1104: 无法打开文件“uuid.lib”)
    * [LINK : fatal error LNK1104: 无法打开文件“kernel32.lib”](#LINK : fatal error LNK1104: 无法打开文件“kernel32.lib”)

* [技巧](#技巧)
  * [快捷键](#快捷键)

## 常见问题

### 新建工程

文件 -> 新建 -> 项目 -> 常规 -> 新项目

### 无法查找或打开PDB文件

工具 -> 选项 -> 调试 -> 符号 -> 勾选`Microsoft符号服务器` -> 指定目录 -> 确定

### 窗口一闪而逝

```
system("pause");
```

### 设置`cl.ext`环境变量

1. 在环境变量中Path 那一项中添加两个路径：

```
E:\VS2017\VC\Tools\MSVC\14.10.25017\bin\HostX86\x86

E:\VS2017\Common7\IDE
```

2. 在环境变量中新建一个LIB 变量，并添加三个路径（记得加分号）：

```
E:\VS2017\VC\Tools\MSVC\14.10.25017\lib\x86;
C:\Program Files (x86)\Windows Kits\10\Lib\10.0.14393.0\ucrt\x86;
C:\Program Files (x86)\Windows Kits\8.1\Lib\winv6.3\um\x86;
```

3. 在环境变量中新建一个INCLUDE 变量，并添加两个路径（记得加分号）：

```
E:\VS2017\VC\Tools\MSVC\14.10.25017\include;
C:\Program Files (x86)\Windows Kits\10\Include\10.0.14393.0\ucrt;
```

4. 在`E:\VS2017\VC\Auxiliary\Build` 这个路径中点击`vcvarall.bat` 这个批处理程序。


### cl命令编译cpp文件遇到的问题

#### LINK : fatal error LNK1104: 无法打开文件“uuid.lib”

查找`Uuid.Lib`,路径`C:\Program Files (x86)\Windows Kits\10\Lib\10.0.16299.0\um\x86`

copy进入`cpp`文件所在的目录

#### LINK : fatal error LNK1104: 无法打开文件“kernel32.lib”

查找`kernel32.lib`,路径`C:\Program Files (x86)\Windows Kits\10\Lib\10.0.16299.0\um\x86`

copy进入`cpp`文件所在的目录




## 技巧

### 快捷键

* Ctrl+Shift+L: 删除当前行
