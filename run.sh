g++ solve.cpp -std=c++17 -D=LOCAL -Wall -Wextra -Wno-unknown-pragmas -g -fsanitize=undefined -D_GLIBCXX_DEBUG 
./a.out < input.txt
rm a.out
