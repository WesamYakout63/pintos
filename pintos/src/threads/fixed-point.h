#define FRACTION (1 << 14)

#define convert_to_fixed(n) (n) * (FRACTION)
#define convert_to_int_zero(x) (x) / (FRACTION)
#define convert_to_nearest(x) ((x) >= 0 ? ((x) + (FRACTION) / 2)\
                                   / (FRACTION) : ((x) - (FRACTION) / 2)\
                                   / (FRACTION))
#define add_fixed(x, y) (x) + (y)
#define sub_fixed(x, y) (x) - (y)
#define add_fixed_to_int(x, n) (x) + (n) * (FRACTION)
#define sub_int_from_fixed(x, n) (x) - (n) * (FRACTION)
#define mul_fixed(x, y) ((int64_t)(x)) * (y) / (FRACTION)
#define mul_fixed_by_int(x, n) (x) * (n)
#define div_fixed(x, y) ((int64_t)(x)) * (FRACTION) / (y)
#define div_fixed_by_int(x, n) (x) / (n)