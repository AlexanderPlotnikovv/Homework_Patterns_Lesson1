#include "SqlSelectQueryBuilder.h"

int main()
{
    SqlSelectQueryBuilder query_builder;
    query_builder.AddColumns({ "name", "email" }).AddColumns({ "phone" });
    query_builder.AddFrom("students");
    query_builder.AddWhere({ { "id", "42" } }).AddWhere({ { "name", "john" } });
    query_builder.BuildQuery();
    return 0;
}