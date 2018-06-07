#include "Customer2.h"

int Customer2::derived_count_ = 0;

Customer2::Customer2()
= default;


Customer2::~Customer2()
{

}
int Customer2::get_count()
{
    return Customer2::derived_count_;
}

int Customer2::raise_count()
{
    return derived_count_++;
}

