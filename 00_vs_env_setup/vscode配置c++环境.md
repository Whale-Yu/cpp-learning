参考：https://www.bilibili.com/video/BV1kR4y1M7R8/?spm_id_from=333.337.search-card.all.click

## VS Code + MinGW-w64 C/C++ 环境配置指南

本指南总结了使用 **VS Code** 搭配 **MinGW-w64** 快速搭建 C/C++ 轻量级开发与一键编译运行环境的核心步骤。

---

## 快速配置流程

```mermaid
graph LR
    A[1. 安装 VS Code 插件] --> B[2. 下载 MinGW-w64]
    B --> C[3. 配置系统环境变量]
    C --> D[4. 按 F6 一键编译运行]
```

---

### 一、 安装 VS Code 扩展插件

打开 VS Code，按快捷键 `Ctrl + Shift + X` 搜索并安装以下三个插件：

| 插件名称 | 说明 |
| :--- | :--- |
| **C/C++** | 微软官方扩展，提供代码高亮、智能补全（IntelliSense）及调试功能 |
| **Better C++ Syntax** | 增强 C/C++ 语法高亮显示，提升代码阅读体验 |
| **C/C++ Compile Run** | 提供一键编译并运行单个 C/C++ 源文件的功能（默认快捷键 `F6`） |

---

### 二、 下载 MinGW-w64 编译器

1. 访问官网下载页面：[WinLibs MinGW-w64 Downloads](https://winlibs.com/#download-release)
2. 选择合适的 Release 版本（推荐下载 64 位 `UCRT` / `Win32 threads` 的 Zip 或 7z 压缩包）。
3. 将下载好的压缩包解压到本地纯英文路径（建议路径无中文、无空格，例如 `C:\mingw64`）。

---

### 三、 配置系统环境变量

为了让系统和 VS Code 能够在任意终端中调用 `gcc` / `g++` 命令，需要配置环境变量：

1. 获取 MinGW-w64 的 `bin` 目录路径（如 `C:\mingw64\bin`）。
2. 打开系统设置：`此电脑` $\rightarrow$ 右键选择 `属性` $\rightarrow$ `高级系统设置` $\rightarrow$ `环境变量`。
3. 在 **系统变量** 中选中 **`Path`**，点击 **编辑**。
4. 点击 **新建**，粘贴 `bin` 目录的绝对路径（如 `C:\mingw64\bin`），依次点击确定保存。
5. **验证环境变量：**
   打开全新的 CMD 或 PowerShell，输入以下命令：
   ```bash
   gcc --version
   ```
   若终端输出 GCC 的版本号，则说明环境变量配置成功。

---

### 四、 代码编写与一键运行 (F6)

1. **重启 VS Code**（确保 VS Code 读取到最新的系统 Path 环境变量）。
2. 新建并保存一个 C 或 C++ 源文件（如 `main.cpp`）：
   ```cpp
   #include <iostream>

   int main() {
       std::cout << "Hello, World!" << std::endl;
       return 0;
   }
   ```
3. 在当前编辑界面直接按下 **`F6`** 键：
   - `C/C++ Compile Run` 插件会自动调用后台编译器生成可执行文件；
   - 并在终端/控制台中运行该程序，显示输出结果。

---

## 常见问题与提示

- **按 F6 提示“找不到编译器 / gcc”**
  - 请确认环境变量添加的是 `bin` 文件夹路径。
  - 配置完环境变量后必须**重启 VS Code** 才能生效。
- **输出控制台中文乱码**
  - 这是由于 Windows 终端默认编码（GBK）与 VS Code 文件编码（UTF-8）不一致导致的。可在 VS Code 设置中搜 `Compile-run` 调整编译参数或切换文件编码格式。