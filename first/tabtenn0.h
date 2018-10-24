//
// Created by mango on 18-7-28.
//

#ifndef WORKSPACE_TABTENN0_H
#define WORKSPACE_TABTENN0_H

#include <string>
using std::string;

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(  const string &fn = "none",
                        const string &ln = "none",
                        bool ht = false);
    void Name() const;
    bool HasTable() const
    {
        return hasTable;
    }
    void ResetTable(bool v)
    {
        hasTable = v;
    }
};

#endif //WORKSPACE_TABTENN0_H
