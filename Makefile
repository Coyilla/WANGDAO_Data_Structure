# Makefile
# 编译器
CC = gcc
# 编译选项
CFLAGS = -Wall -g
# 目标程序名
TARGET = T1
# 自动获取所有.c文件
SRCS = $(wildcard *.c)
# 生成对应的.o文件
OBJS = $(SRCS:.c=.o)

# 默认目标
all: $(TARGET)

# 链接
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# 编译规则
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 运行程序
run: $(TARGET)
	./$(TARGET)

# 清理生成的文件
clean:
	del *.o $(TARGET).exe 2>nul || rm -f *.o $(TARGET)

# 显示帮助
help:
	@echo "可用命令:"
	@echo "  make       - 编译程序"
	@echo "  make run   - 编译并运行"
	@echo "  make clean - 清理生成的文件"
	@echo "  make help  - 显示此帮助"

.PHONY: all run clean help