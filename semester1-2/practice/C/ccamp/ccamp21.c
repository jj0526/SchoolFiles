void test1(int x)
{
    x = 20;
}

int main(void)
{
    int x = 10;

    test1(x);

    printf("x=%d\n", x);

    return 0;
}