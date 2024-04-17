# nanopb_env



## nanopb version download

下载地址：[Nanopb - downloads (jpa.kapsi.fi)](https://jpa.kapsi.fi/nanopb/download/)

使用当前最新版本0.4.8

![image-20240417161657073](C:\Users\woan\AppData\Roaming\Typora\typora-user-images\image-20240417161657073.png)







## 文件结构

| 文件目录/文件            | 用途                                             |
| ------------------------ | ------------------------------------------------ |
| nanopb-0.4.8-windows-x86 | nanopb-0.4.8-windows-x86 release                 |
| out                      | 输出的nanopb C文件                               |
| build_nanopb.bat         | c文件生成脚本                                    |
| test_enumminmax.proto    | 测试proto文件，后续新增的ptoto文件放在相同路径下 |



## 使用方法

- 命令行执行build_nanopb.bat

```
PS E:\work\self\nanopb_env> .\build_nanopb.bat
proto path can use TAB and drag:
```



- 输入proto文件路径后执行，可使用tab匹配

```
PS E:\work\self\nanopb_env> .\build_nanopb.bat
proto path can use TAB and drag:test_enumminmax.proto
PS E:\work\self\nanopb_env>
```



- C文件已生成

