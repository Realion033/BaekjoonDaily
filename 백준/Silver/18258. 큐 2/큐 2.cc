#include <iostream>
#include <string>
#include <queue>

std::queue<int> queen; // 큐 선언

// 큐가 비어있는지 확인하는 함수
bool isEmpty() {
    return queen.empty();
}

// 큐에 값을 추가하는 함수
void pushValue(int value) {
    queen.push(value);
}

// 큐의 가장 앞에 있는 값을 출력하고 제거하는 함수
void popFront() {
    if (!isEmpty()) {
        std::cout << queen.front() << "\n";
        queen.pop();
    } else {
        std::cout << "-1\n";
    }
}

// 큐의 가장 앞에 있는 값을 출력하는 함수
void printFront() {
    if (!isEmpty())
        std::cout << queen.front() << "\n";
    else
        std::cout << "-1\n";
}

// 큐의 가장 뒤에 있는 값을 출력하는 함수
void printBack() {
    if (!isEmpty())
        std::cout << queen.back() << "\n";
    else
        std::cout << "-1\n";
}

// 큐의 크기를 출력하는 함수
void printSize() {
    std::cout << queen.size() << "\n";
}

// 큐가 비어있는지 여부를 출력하는 함수
void printEmpty() {
    std::cout << isEmpty() << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;

        if (str == "push") {
            int ipt;
            std::cin >> ipt;
            pushValue(ipt);
        } else if (str == "pop") {
            popFront();
        } else if (str == "size") {
            printSize();
        } else if (str == "empty") {
            printEmpty();
        } else if (str == "front") {
            printFront();
        } else if (str == "back") {
            printBack();
        }
    }

    return 0;
}