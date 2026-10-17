void *memcpy(void *dest, const void *src, int n)
{
    int i = 0;
    while (i < n)
    {
        *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
        i++;
    }
    return dest;
}