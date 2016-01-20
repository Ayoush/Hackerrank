#include <functional>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();

    unsigned int test_cases;
    cin >> test_cases;

    for (unsigned int test {0}; test < test_cases; ++test)
    {
        unsigned int array_size;
        unsigned int group_size;

        cin >> array_size >> group_size;

        vector<unsigned int> array(array_size);

        for (auto& element : array)
        {
            cin >> element;
        }

        multiset<unsigned int,  greater<unsigned int>> group;

        for (unsigned int i {0}; i < group_size; ++i)
        {
            group.insert(array[i]);
        }

        cout << *group.begin();

        for (unsigned int i {0}; i < array_size - group_size; ++i)
        {
            group.erase(group.find(array[i]));
            group.insert(array[i + group_size]);

            cout << ' ' << *group.begin();
        }

        cout << '\n';
    }

    return 0;
}
