g++ $1 -g -std=c++17 -D=LOCAL -Wno-unknown-pragmas -fsanitize=undefined,address
#g++ $1 -D_GLIBCXX_DEBUG -g -std=c++17 -D=LOCAL -Wall -Wextra -Wno-unknown-pragmas -fsanitize=undefined,address

if [ -e a.out ]; then
    ./a.out < input.txt > output.txt
    rm -f a.out
fi
