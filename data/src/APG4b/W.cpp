#include <iostream>
#include <time.h>

static int f0(int N)
{
    return 1;
}

static int f1(int N, int M)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        s++;
    }
    for (int i = 0; i < M; i++)
    {
        s++;
    }
    return s;
}

static int f2(int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        int t = N;
        int cnt = 0;
        while (t > 0)
        {
            cnt++;
            t /= 2;
        }
        s += cnt;
    }
    return s;
}

static int f3(int N)
{
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s++;
        }
    }
    return s;
}

static int f4(int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            s += i + j;
        }
    }
    return s;
}

static int f5(int N, int M)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            s += i + j;
        }
    }
    return s;
}

int main()
{
    int N, M;
    std::cin >> N >> M;

    int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;

    // 計算量が最も大きいもの1つだけコメントアウトする
    a0 = f0(N);
    a1 = f1(N, M);
    a2 = f2(N);
    a3 = f3(N);
    // a4 = f4(N);
    a5 = f5(N, M);

    std::cout << "f0: " << a0 << std::endl;
    std::cout << "f1: " << a1 << std::endl;
    std::cout << "f2: " << a2 << std::endl;
    std::cout << "f3: " << a3 << std::endl;
    std::cout << "f4: " << a4 << std::endl;
    std::cout << "f5: " << a5 << std::endl;
}
