CC 		= g++
CFLAGS		= -Wall
OBJFILES	= main.o simpleGraph01.o
TARGET 		= main

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) 

clean:
	rm -f $(OBJFILES) $(TARGET) *~
