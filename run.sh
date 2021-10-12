g++ solve.cpp -std=c++17 -D=LOCAL -Wall -Wextra -Wno-unknown-pragmas -g -fsanitize=undefined -D_GLIBCXX_DEBUG 

if [ -e a.out ]; then
    ./a.out < input.txt
    rm -f a.out
fi
