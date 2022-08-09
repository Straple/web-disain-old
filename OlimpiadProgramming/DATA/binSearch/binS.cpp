#include <bits/stdc++.h>
using namespace std;

int binSearch(vector<int> &a, int key)   /// Функция бинарного поиска
{
    /// Аргументы: функция, искомый элемент

    int left = -1 , right = a.size(); /// границы
    while (l < r - 1)
    {
        int m = (l + r) / 2;           /// m — середина

        if (a[m] < key) /// сужение области поиска
        {
            l = m; /// если функция возрастающая
            r = m; /// убывающая
        }
        else
        {
            r = m; /// если функция возрастающая
            l = m; /// убывающая       
        }
    }
    return r;
}


int main()
{
    return 0;
}
