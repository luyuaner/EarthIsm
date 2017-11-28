//
//  EarthIsm.cpp
//  EarthIsm
//
//  Created by 陆远 on 2017/11/26.
//  Copyright © 2017年 EarthIsm. All rights reserved.
//

#include "EarthIsm.h"

EarthIsm::EarthIsm()
{

}
EarthIsm::~EarthIsm()
{

}

string EarthIsm::getCheat()
{
#if ENGLISH
    return "cheat";
#elif CHINESE
    return "欺骗性";
#endif
}
