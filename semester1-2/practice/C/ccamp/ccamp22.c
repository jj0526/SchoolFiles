void test2(int *p)
{
    *p = 20;
}

int main(void)
{
    int x = 10;

    test2(&x);

    printf("x=%d\n", x);

    return 0;
}