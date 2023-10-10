#include <iostream>
using namespace std;

int main_func(int n, int array[], int step, int fst_sum, int snd_sum){
    if (step == n) {
        return abs(fst_sum - snd_sum);
    }
    //int fst_var = main_func(n, array, step + 1, fst_sum + array[step], snd_sum);
    //int snd_var = main_func(n, array, step + 1, fst_sum, snd_sum + array[step]);
    //return min(fst_sum, snd_sum);
    return min(
            main_func(n, array, step + 1, fst_sum + array[step], snd_sum),
            main_func(n, array, step + 1, fst_sum, snd_sum + array[step])
            );
}

int main(){
    int n_chashek, cur_m = 0;
    cin >> n_chashek;

    if (32 < n_chashek || n_chashek < 2)
        exit(42);

    int *m_chashek = (int *)malloc(n_chashek * sizeof(int));
    for (int i = 0; i < n_chashek; ++i){
        cin >> cur_m;
        m_chashek[i] = cur_m;
    }
    cout << main_func(n_chashek, m_chashek, 0, 0, 0);

    free(m_chashek);

    return 0;
}