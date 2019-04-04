//----------------------------------------------------------------------------
//   The confidential and proprietary information contained in this file may
//   only be used by a person authorised under and to the extent permitted
//   by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//          (C) COPYRIGHT 2018 ARM Limited or its affiliates
//              ALL RIGHTS RESERVED
//
//   This entire notice must be reproduced on all copies of this file
//   and copies of this file may only be made by a person if such person is
//   permitted to do so under the terms of a subsisting license agreement
//   from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#ifndef CLIENTCOMMAND_H
#define CLIENTCOMMAND_H

#include <ATL/ATLObject.h>
#include <ATL/ATLTypes.h>

namespace act {

class CRegPollCommand : public virtual atl::CATLObject {
public:
    virtual const std::string GetObjectStaticName();
    std::string name;
    std::string type;
    atl::UInt32 offset;
    atl::UInt32 size;
};

class CApiPollCommand : public virtual atl::CATLObject {
public:
    virtual const std::string GetObjectStaticName();
    std::string name;
    atl::UInt8 section;
    atl::UInt8 command;
};

}

#endif // CLIENTCOMMAND_H
