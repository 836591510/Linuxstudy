SOURCES:=$(wildcard *.c)
OBJS:=$(patsubst %.c,%.o,$(SOURCES))
EXE:=main
CFLAGS:=-Wall -g
$(EXE):$(OBJS)
	gcc -o $@ $^ 
main.o:main.c
	gcc -c $(CFLAGS) $< -o $@ -I ../
func.o:func.c
	gcc -c $(CFLAGS) $< -o $@
.PHONY:clean
clean:
	rm -f $(EXE) $(OBJS)
