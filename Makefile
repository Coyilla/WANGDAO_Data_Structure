CC = gcc
CFLAGS = -Wall -g -I./include
BUILD_DIR = build
SRC_DIR = src

# 运行的文件名：make run n=chapter2/T2-2
n ?= chapter2/T1

# 重点：逗号后面千万不要加空格！
# 正确写法：$(subst FROM,TO,TEXT)
SAFE_NAME = $(subst /,,$(n))

# 当前要测试的源文件
CURRENT_SRC = $(SRC_DIR)/$(n).c

# 公共实现文件
COMMON_SRCS = $(wildcard $(SRC_DIR)/common/*.c)

# 最终生成的可执行文件路径
TARGET = $(BUILD_DIR)/$(SAFE_NAME).exe

all: $(TARGET)

# 依赖检查：源码或公共库变动都会触发重编
$(TARGET): $(CURRENT_SRC) $(COMMON_SRCS)
	@if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"
	@echo [Linking] $(n) + Commons -> $@
	$(CC) $(CFLAGS) $(CURRENT_SRC) $(COMMON_SRCS) -o $@

run: all
	@echo ---------------------------------------
	@echo Running: $(TARGET)
	@.\$(TARGET)
	@echo ---------------------------------------

clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
	@echo Clean completed.

.PHONY: all run clean