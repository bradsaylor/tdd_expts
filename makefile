all: todo

todo: todo.o todo_test.o
	gcc todo.o todo_test.o -o todo

todo.o:  todo.c
	gcc -c todo.c

todo_test.o: todo_test.c
	gcc -c todo_test.c

clean:
	rm *.o
