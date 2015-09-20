all: mergesort quicksort

mergesort: mergesort.cpp
	g++ $< -o $@

quicksort: quicksort.cpp
	g++ $< -o $@

.PHONY: clean
clean:
	rm mergesort quicksort
