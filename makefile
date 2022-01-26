EXE:=exe
$(EXE): main.cpp string.cpp string.hpp
	g++ $^ -o $@

clean: 
	rm $(EXE)
