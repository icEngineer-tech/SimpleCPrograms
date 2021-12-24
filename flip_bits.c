int flip_bits(int n, unsigned nbr)
{
    switch(nbr)
    {
        case 4:
            return ~n & 0xf;
            break;
        case 16:
            return ~n & 0xffff;
            break;
        case 8:
            return ~n & 0xff;
            break;
        case 32:
            return ~n & 0xffffffff;
            break;
    }
}
