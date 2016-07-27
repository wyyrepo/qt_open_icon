/**
 ** @author:	   浓咖啡
 ** @date:	   2016.7.27
 ** @brief:      列表组件
 */

#ifndef BASELIST_H
#define BASELIST_H

#include "baselabel.h"

class BaseList : public QTableWidget
{
public:
    BaseList();

public slots:
    virtual void currentCellChangedSlot(int currentRow, int currentColumn,\
                            int previousRow, int previousColumn);
};

#endif // BASELIST_H
