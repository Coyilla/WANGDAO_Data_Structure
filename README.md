# 数据结构学习题库

> 使用 C 语言实现的基础数据结构学习项目，适合计算机小白和复习数据结构的人练习。

## 项目简介

本项目是一个用于学习数据结构的题库，用最基础的 C 语言实现了各种数据结构及其基本操作。代码简洁易懂，适合初学者理解数据结构的底层原理。

项目内容参考《王道数据结构》教材，按章节组织习题和实现代码。

## 项目结构

```bash
Data_Structure/
├── include/                    # 头文件目录
│   ├── seq_list.h             # 顺序表相关定义
│   ├── sq_list.h              # 静态顺序表定义
│   └── chapter.h              # 章节相关定义
│
├── src/                        # 源代码目录
│   ├── common/                 # 基础数据结构实现
│   │   ├── sequential_list_dynamic.c   # 动态顺序表实现
│   │   └── sequential_list_static.c    # 静态顺序表实现
│   │
│   ├── chapter1/               # 第一章习题
│   │   └── T1.c
│   │
│   ├── chapter2/               # 第二章习题（线性表）
│   │   ├── T2-1.c             # 顺序表相关题目
│   │   ├── T2-2.c
│   │   └── T2-3.c
│   │
│   └── problems/               # 纯享版题目（仅题目代码）
│       └── ch2/
│           ├── t2-1.c
│           ├── t2-2.c
│           └── t2-3.c
│
├── Makefile                    # 编译配置文件
└── README.md                   # 项目说明文档
```

### 目录说明

| 目录 | 说明 |
|------|------|

| `include/` | 存放所有头文件，包含数据结构定义和函数声明 |
| `src/common/` | 基础数据结构的实现，如顺序表、链表、栈、队列等 |
| `src/chapterX/` | 对应《王道数据结构》各章节的习题实现 |
| `src/problems/` | 纯享版题目，只包含解题代码，方便做题练习 |

## 已实现的数据结构

### 顺序表（SeqList）

- 动态分配顺序表
  - 初始化 `InitList_D()`
  - 插入 `ListInsert_D()`
  - 删除 `ListDelete_D()`
  - 按值查找 `LocateElem_D()`
  - 打印 `PrintList_D()`
  - 自定义初始化 `CreateList_D()`

- 静态顺序表

## 运行方式

### 环境要求

- Windows 系统（目前仅支持 Windows）
- GCC 编译器
- Make 工具

### 编译运行

**运行指定文件：**

```bash
make run n=chapter2/T2-1
```

**参数说明：**

- `n`：指定要运行的源文件路径（相对于 `src/` 目录，不含 `.c` 后缀）

**示例：**

```bash
# 运行第一章题目
make run n=chapter1/T1

# 运行第二章题目
make run n=chapter2/T2-1
make run n=chapter2/T2-2
make run n=chapter2/T2-3

# 运行纯享版题目
make run n=problems/ch2/t2-1
```

### 其他命令

```bash
# 仅编译（不运行）
make

# 清理编译产物
make clean
```

## 跨平台说明

目前项目仅支持 **Windows** 系统，Makefile 中使用了 Windows 特定的命令（如 `if not exist`、`rmdir /s /q` 等）。

如需在其他系统（Linux/macOS）上运行，需要修改 [Makefile](Makefile) 中的以下部分：

1. 目录创建命令：将 `if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"` 改为 `mkdir -p $(BUILD_DIR)`
2. 清理命令：将 `rmdir /s /q` 改为 `rm -rf`
3. 可执行文件后缀：将 `.exe` 改为空或适当的后缀

## 学习建议

1. **初学者**：建议先阅读 `src/common/` 下的基础实现，理解数据结构的基本操作
2. **做题练习**：可以在 `src/problems/` 下找到对应章节的题目进行练习
3. **参考实现**：`src/chapterX/` 下的文件包含详细注释的习题解答，做完题后可以对照参考

## 更新计划

- [x] 第二章：线性表
- [ ] 第三章：栈和队列（待更新）
- [ ] 第四章：树与二叉树（待更新）
- [ ] 第五章：图（待更新）
- [ ] 第六章：查找（待更新）
- [ ] 第七章：排序（待更新）

## 参考资料

- 《王道数据结构》考研复习指导

---

> 持续更新中，欢迎学习交流！
