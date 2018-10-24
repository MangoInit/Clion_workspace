//
// Created by mango on 18-7-28.
//
#include "tabtenn0.h"
#include <iostream>


/* 初始化列表 */
TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) : firstname(fn),lastname(ln),hasTable(ht)
{}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname << std::endl;
}