g++ solve.cpp -g -std=c++17 -D=LOCAL -Wno-unknown-pragmas -fsanitize=undefined,address
#g++ solve.cpp -D_GLIBCXX_DEBUG -g -std=c++17 -D=LOCAL -Wall -Wextra -Wno-unknown-pragmas -fsanitize=undefined,address

if [ -e a.out ]; then
    ./a.out < input.txt
    rm -f a.out
fi
