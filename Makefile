TARGET = libsotscurl.a

$(TARGET): sots_curl.o
	ar rcs $@ $^

sots_curl.o: sots_curl.c
	clang -c $< -o $@

clean:
	rm -f *.o *.a $(TARGET)

install:
	cp $(TARGET) /usr/local/lib/$(TARGET)