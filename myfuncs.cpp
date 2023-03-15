#include "myfuncs.h"
#include "myconsts.h"
#include <iostream>
#include <limits>

long max_square(long* numbers, long len)
{
    long max = std::numeric_limits<long int>::min();
    for(int i = 0; i < len; i++)
    {
        long squared = numbers[i]*numbers[i];
        long &squared = squared;
        if (squared > max)
            max = squared;
        delete &squared;
        
    }
    return max;
}

long max_cube(long* numbers, long len)
{
    long max = std::numeric_limits<long int>::min();
    for(int i = 0; i < len; i++)
    {
        if(numbers[i] > 0)
        {
            long cubed = numbers[i]*numbers[i]*numbers[i];
            long &cubed = cubed;
            if(cubed > max)
                max = cubed;
            delete &cubed;   
        }
    }
    return max;
}

long min_na(long* numbers, long len)
{
    long min = std::numeric_limits<long int>::max();
    for(int i = 0; i < len; i++)
    {
        if(numbers[i] < 0)
        {
            long na = i*numbers[i];
            long &na = na;
            if(na < min)
                min = na;
            delete &na;
        }
    }
    return min;
}

long min_sums(long* numbers, long len)
{
    long min = std::numeric_limits<long int>::max();
    for(int i = 1; i < len; i++)
    {
        long sum = numbers[i] + numbers[i-1];
        long &sum = sum;
        if(sum < min)
            min = sum;
        delete &sum;
    }
    return min;
}

long max_multiplications(long* numbers, long len)
{
    long max = std::numeric_limits<long int>::min();
    long mlt = 1;
    long &mlt = mlt;
    for(int i = 0; i < len; i++)
    {
        mlt *= numbers[i];
        if(mlt > max)
            max  = mlt;
        else if(mlt == 0)
            break;
    }
    delete &mlt;
    return max;
}

long evens_number(long* numbers, long len)
{
    long evens = 0;
    for(int i = 0; i < len; i++)
    {
        evens += numbers[i]%2;
    }
    return evens;
}

long double_odds_number(long* numbers, long len)
{
    long dodds = 0;
    for(int i = 0; i < len; i++)
    {
        dodds += !((numbers[i]%2)%2);
    }
    return dodds;
}

long if_square(long* numbers, long len)
{
    long sq_num = 0;
    for(int i = 0; i < len; i++)
    {
        if(numbers[i] >= 0)
        {
            for(int j = numbers[i]; j <= numbers[i]; j++)
            {
                sq_num += numbers[i]==j*j;
            }
        }
    }
    return sq_num;
}

long if_squared_odd(long* numbers, long len)
{
    long sqodd_num = 0;
    for(int i = 0; i < len; i++)
    {
        if(numbers[i] >= 0)
        {
            for(int j = numbers[i]; j <= numbers[i]; j++)
            {
                sqodd_num += (numbers[i]==j*j && !(j%2));
            }
        }
    }
    return sqodd_num;
}