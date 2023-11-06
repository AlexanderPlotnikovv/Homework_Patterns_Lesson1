#include "SqlSelectQueryBuilder.h"
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddColumns(std::vector<std::string> name) noexcept
{
    for (auto elem : name)
    {
        methods.column.push_back(elem);
    }
    return *this;
}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddFrom(std::string name) noexcept
{
    methods.from = name;
    return *this;
}
SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddWhere(std::map<std::string, std::string> name) noexcept
{
    for (auto elem : name)
    {
        methods.where.insert(elem);
    }
    return *this;
}
void SqlSelectQueryBuilder::BuildQuery()
{
    std::cout << "SELECT ";
    if (methods.column.size() == 0)
    {
        std::cout << "* ";
    }
    else
    {
        for (auto elem : methods.column)
        {
            std::cout << elem << ", ";
        }
    }
    std::cout << "FROM " << methods.from << " WHERE ";
    for (auto elem : methods.where)
    {
        std::cout << elem.first << "=" << elem.second << " , ";
    }
    std::cout << ";";
    methods.column.clear();
    methods.from = "";
    methods.where.clear();
}