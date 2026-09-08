# CMake 基础

CMake 是一个跨平台的构建系统生成工具，用于管理 C/C++ 项目的编译过程。

通过编写 CMakeLists.txt 配置文件，你可以定义项目的构建规则、依赖关系和编译选项，CMake 会自动生成对应平台的构建文件（如 Unix 下的 Makefile 或 Windows 下的 Visual Studio 解决方案）。

## CMakeLists.txt 文件

CMakeLists.txt 是 CMake 的核心配置文件，每个 CMake 项目至少需要一个 CMakeLists.txt 文件。

CMake 通过读取文件中的指令来了解项目的结构、源文件列表和编译要求。

### 基本语法
CMakeLists.txt 由一系列 CMake 指令组成，每个指令的格式为：命令名(参数列表)。

下面是构建 CMake 项目时最常用的指令及其实例。

- 指定 CMake 最低版本：
    ```
    # 语法：cmake_minimum_required(VERSION <version>)
    # 该指令必须放在 CMakeLists.txt 的最顶部
    # 示例：要求 CMake 版本不低于 3.10
    cmake_minimum_required(VERSION 3.10)
    ```

- 定义项目名称和语言：
    ```
    # 语法：project(<项目名> [<语言>...])
    # 语言参数可选，常用值：CXX（C++）、C（C 语言）
    # 调用 project() 后会自动设置 PROJECT_NAME 等变量
    project(MyProject CXX)
    ```

- 添加可执行文件：
    ```
    # 语法：add_executable(<目标名> <源文件>...)
    # 将指定的源文件编译生成一个可执行文件
    add_executable(MyApp main.cpp utils.cpp)
    ```

- 添加库文件：
    ```
    # 语法：add_library(<目标名> [STATIC | SHARED | MODULE] <源文件>...)
    # STATIC：静态库（.a / .lib），编译时直接嵌入可执行文件
    # SHARED：动态库（.so / .dll），运行时加载
    # 不指定类型时，由 BUILD_SHARED_LIBS 变量决定
    add_library(MyLib STATIC library.cpp)
    ```

- 链接库到目标：
    ```
    # 语法：target_link_libraries(<目标> <库>...)
    # 将指定的库链接到目标（可执行文件或其他库）
    # 可以链接自己项目中的库目标，也可以链接外部库
    target_link_libraries(MyApp PRIVATE MyLib)
    ```

- 设置变量：
    ```
    # 语法：set(<变量名> <值>...)
    # 定义一个普通变量，后续通过 ${变量名} 引用
    set(CMAKE_CXX_STANDARD 17)

    # 同时设置多个值（列表）
    set(SOURCES main.cpp utils.cpp helper.cpp)
    add_executable(MyApp ${SOURCES})
    ```
- 为目标指定头文件路径：
    ```
    # 语法：target_include_directories(<目标>
    #           [BEFORE | AFTER]
    #           [SYSTEM]
    #           [PUBLIC | PRIVATE | INTERFACE]
    #           <路径>...)
    # PUBLIC：当前目标和依赖它的目标都能使用该路径
    # PRIVATE：只有当前目标能使用
    # INTERFACE：只有依赖当前目标的其他目标能使用
    target_include_directories(MyApp PRIVATE ${PROJECT_SOURCE_DIR}/include)
    ```

- 设置安装规则：
    ```
    # 语法：install(TARGETS <目标>...
    #         [RUNTIME DESTINATION <可执行文件安装路径>]
    #         [LIBRARY DESTINATION <动态库安装路径>]
    #         [ARCHIVE DESTINATION <静态库安装路径>]
    #         [INCLUDES DESTINATION <头文件安装路径>])
    # 定义执行 make install 时各类型文件的安装位置
    install(TARGETS MyApp RUNTIME DESTINATION bin)
    ```

- 条件语句：
    ```
    # 语法：if(<条件>) ... elseif(<条件>) ... else() ... endif()
    # CMake 支持的条件表达式包括：比较、逻辑运算、变量判断等
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        # Debug 模式下启用调试信息
        message(STATUS "当前为 Debug 构建模式")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
    else()
        # Release 模式下启用优化
        message(STATUS "当前为 Release 构建模式")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
    endif()
    ```