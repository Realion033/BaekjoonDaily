#include <iostream>
#include <algorithm>

std::string words[20001];

int cmp(std::string a, std::string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }

    else
    {
        return a.length() < b.length();
    }
}

int main()
{
    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> words[i];
    }

    // 이게 말이 안되는게, cmp로 함수포인터 가르키면, 거기에 비교하는 인자 2개를 받게되는데, 솔직히 sort까봤을때 이게 어케되는건지 ㅈ도몰라서 홍상화한테 물어봐야겠다람쥐
    std::sort(words, words + n, cmp);

    for (int i = 0; i < n; i++)
    {
        // 중복된 경우 한번만 출력
        if (words[i] == words[i - 1])
        {
            continue;
        }
        std::cout << words[i] << std::endl;
    }

    // + 지피티에게 물어봄
    //     std::sort는 템플릿 함수로 구현되어 있으며, 내부적으로 함수 포인터처럼 cmp를 호출합니다.

    // 📌 std::sort가 비교 함수(cmp) 를 호출하는 방식
    //                                                    cpp
    //                                                        복사
    //                                                            편집
    //                                                                std::sort(first, last, cmp);
    //     ➡ 내부에서 cmp(a, b) 를 호출하는 방식으로 정렬을 수행함.

    // 🔍 std::sort 내부 동작 방식
    //         C++ 의 std::sort는 IntroSort(QuickSort + HeapSort + InsertionSort) 알고리즘을 사용합니다.
    // ➡ 재귀적으로 요소들을 비교하면서 정렬함.

    // ✔ 내부적으로 요소를 비교할 때,
    //         다음과 같이 cmp(a, b) 를 호출하여 두 개의 값을 비교함.

    // ✅ std::sort 내부 구현 예제(단순화된 버전)
    //             cpp
    //                 복사
    //                     편집 template <typename RandomIt, typename Compare>
    //                     void my_sort(RandomIt first, RandomIt last, Compare cmp)
    //     {
    //         for (auto i = first; i != last; ++i)
    //         {
    //             for (auto j = i + 1; j != last; ++j)
    //             {
    //                 if (cmp(*j, *i))
    //                 { // 🔥 직접 비교 함수 호출
    //                     std::swap(*i, *j);
    //                 }
    //             }
    //         }
    //     }
    //     ✔ cmp(a, b) 를 호출하여 사용자가 제공한 비교 함수에 따라 정렬 수행.
}
