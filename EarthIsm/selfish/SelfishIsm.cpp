//
//  SelfishIsm.cpp
//  EarthIsm
//
//  Created by 陆远 on 2017/11/26.
//  Copyright © 2017年 EarthIsm. All rights reserved.
//

#include "SelfishIsm.h"

SelfishIsm::SelfishIsm()
{

}
SelfishIsm::~SelfishIsm()
{

}

string SelfishIsm::getCheat()
{
#if ENGLISH
    return "cheat";
#elif CHINESE
    return "欺骗性";
#endif
}
