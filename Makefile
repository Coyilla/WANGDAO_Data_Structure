CC = gcc
CFLAGS = -Wall -g -I./include
BUILD_DIR = build
SRC_DIR = src

# 运行的文件名：make run n=chapter2/T1
n ?= chapter1/T1

# 当前要测试的源文件
CURRENT_SRC = $(SRC_DIR)/$(n).c

# 所有公共的实现文件（排除掉含有 main 的文件）
COMMON_SRCS = $(SRC_DIR)/common/*.c 
# 过滤掉不存在的文件，防止报错
COMMON_EXIST = $(wildcard $(COMMON_SRCS))

TARGET = $(BUILD_DIR)/program.exe

all: $(TARGET)

$(TARGET): $(CURRENT_SRC)
	@if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"
	@echo [Linking with Commons] $@
	$(CC) $(CFLAGS) $(CURRENT_SRC) $(COMMON_EXIST) -o $@

run: all
	@echo ---------------------------------------
	@.\$(TARGET)
	@echo ---------------------------------------

clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)

.PHONY: all run clean