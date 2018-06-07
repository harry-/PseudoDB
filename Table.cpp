#include "Table.h"


int Table::count_ = 0;

Table::Table()
{
;
}

Table::~Table()
{
}

int Table::get_count()
{
    return count_;
}

int Table::raise_count()
{
    return Table::count_++;
}
