#include<stdio.h>
#include<math.h>

float deg_to_radian(float x) {
    return M_PI * x / 180.;
}

float calTrapezoidal(float a, float b, int N, float fun_arr[N+1]) {
    float sum;
    int i;

    sum = fun_arr[0] + fun_arr[N];

    for (i = 1; i < N; i++)
        sum += 2 * fun_arr[i];

    return (b-a) * sum / (2*N);
}

int main(void)
{
    float start, end, step_size, ans;
    int N, i;

    start = 0;
    end = 60;
    N = 12;
    step_size = (end-start)/N;
    float tan_arr[N+1];

    for (i = 0; i <= N; i++)
        tan_arr[i] = tan(deg_to_radian(step_size*i));

    ans = calTrapezoidal(deg_to_radian(start), deg_to_radian(end), N, tan_arr);

    printf("Result: %f\n", ans);
    printf("Actual value: %f\n", log(2));

    return 0;
}