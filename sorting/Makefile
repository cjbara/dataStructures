all: mergesort quicksort insertionsort

mergesort: mergesort.cpp
	g++ $< -o $@

quicksort: quicksort.cpp
	g++ $< -o $@

insertionsort: insertionsort.cpp
	g++ $< -o $@

.PHONY: clean
clean:
	rm mergesort quicksort insertionsort
