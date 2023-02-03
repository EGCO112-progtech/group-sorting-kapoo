DEPS = sort
compile: main.c 
		gcc  main.c -o  $(DEPS)

runSelection: $(DEPS)
	  ./$(DEPS)

run: $(DEPS)
	 	./$(DEPS)


clean: $(DEPS)
	 rm $(DEPS)
