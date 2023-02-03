DEPS = sort
compile: main.c 
	 gcc  main.c -o $(DEPS)
	gcc main.c -o  selection

runSelection: selection
	  ./selection

run: $(DEPS)
	 	./$(DEPS)


clean: $(DEPS)
	 rm $(DEPS)
