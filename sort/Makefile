FLAGS=-std=c++11

all: mergesort quicksort insertionsort bucketsort

mergesort: mergesort.cpp
	g++ $(FLAGS) $< -o $@

quicksort: quicksort.cpp
	g++ $(FLAGS) $< -o $@

insertionsort: insertionsort.cpp
	g++ $(FLAGS) $< -o $@

bucketsort: bucketsort.cpp
	g++ $(FLAGS) $< -o $@

.PHONY: clean
clean:
	rm mergesort quicksort insertionsort bucketsort
