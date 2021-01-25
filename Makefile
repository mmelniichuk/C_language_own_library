# declare variables

# name of library
NAME = libmx.a

# used directories
SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:%.c=%.o)))
INC_FILES = $(wildcard $(INC_DIR)/*.h)

# compiler
CC = clang

# flags for compiler
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

#  create library archives used O-files
AR = ar

# flags for archives
AFLAGS = rcs

MKDIR = mkdir -p
RM = rm -rf

DFLAGS = -fsanitize=address -g

# target - create libmx.a
all: $(NAME)

# archiev O-files in libmx.a and launch it
$(NAME): $(OBJ_FILES)
	@$(AR) $(AFLAGS) $@ $^

# make obj directory and compile O-files in it
$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(OBJ_DIR):
	@$(MKDIR) $@

uninstall: clean
	@$(RM) $(NAME)

clean:
	@$(RM) $(OBJ_DIR) a.out

debug:
	@cp $(SRC_FILES) .
	@cp $(INC_FILES) src
	@clang $(CFLAGS) $(DFLAGS) -o $(NAME) $(SRC_FILES)

reinstall: uninstall all

start: all
	@$(CC) $(CFLAGS) -I $(INC_DIR) tmain.c $(NAME); $(RM) a.out.dSYM/; ./a.out

.PHONY: all uninstall clean reinstall
