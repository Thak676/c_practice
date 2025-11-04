
void char_swap(char* a, char* b)
{
    if (a == b) return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void int_swap(int* a, int* b)
{
    if (a == b) return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}


