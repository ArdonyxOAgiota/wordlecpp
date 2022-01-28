all: 
	g++ words.cpp -o words

install: 
	cp words /usr/bin/
clean: 
	rm -fr words
