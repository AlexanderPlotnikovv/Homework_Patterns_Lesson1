#pragma once
#include "Methods.h"
#include <iostream>
class SqlSelectQueryBuilder
{
    Methods methods;
public:
    SqlSelectQueryBuilder() = default;
    SqlSelectQueryBuilder& AddColumns(std::vector<std::string> name) noexcept;
    SqlSelectQueryBuilder& AddFrom(std::string name) noexcept;
    SqlSelectQueryBuilder& AddWhere(std::map<std::string, std::string> name) noexcept;
    void BuildQuery();
};

