DEPS= sort
compile: main.c 
	 gcc  main.c -o $(DEPS)

runSelection: selection
	  ./selection

run: $(DEPS)
	 ./$(DEPS)


clean: $(DEPS)
	 rm $(DEPS)
