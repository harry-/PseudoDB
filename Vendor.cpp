#include "Vendor.h"


int Vendor::derived_count_ = 0;



Vendor::Vendor()
{
}


Vendor::~Vendor()
{
}

int Vendor::get_count()
{
    return Vendor::derived_count_;
}

int Vendor::raise_count()
{
    return Vendor::derived_count_++;
}
