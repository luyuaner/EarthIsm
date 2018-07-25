//
//  SelfishIsm.hpp
//  EarthIsm
//
//  Created by 陆远 on 2017/11/26.
//  Copyright © 2017年 EarthIsm. All rights reserved.
//
/*
自私主义类，它强调了个人，团体，宗教，国家等自私性的一面，当然它并不是属于贬义，它只是人类当中最基础的表现的一种方式
 */

#ifndef SelfishIsm_hpp
#define SelfishIsm_hpp

#include "EarthIsm.h"

class SelfishIsm : public EarthIsm {
public:
    SelfishIsm();
    ~SelfishIsm();

public:
    //欺骗性(是所有派生类共有的属性）
    string getCheat();
};

#endif /* SelfishIsm_hpp */
