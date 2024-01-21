# Compiler
CC			= g++

# Options
CFLAGS	= -std=c++17

# Filename
TARGET	= itky.exe

# sources
SRCS		= itky.cpp fileManager.cpp NoInputFilesError.cpp

# Object filename
OBJS		= $(SRCS:.cpp=.o)

# Include path
INCDIR	=

# Library path
LIBDIR	=

# Make target file
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

# Make object file
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

# Clean all object files
clean:
	del -f $(OBJS)
