#ifndef __TABTENN0_H__
#define __TABTENN0_H__

#include <iostream>
#include <string>

using namespace std;

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) { hasTable = v; }
};

class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string &fn = "none",
            const string &ln = "none", bool ht = false);
    unsigned int Rating() const {return rating;}
    void ResetRating(unsigned int r) {rating = r;}
    
};

#endif
