//
//  EarthIsm.hpp
//  EarthIsm
//
//  Created by 陆远 on 2017/11/26.
//  Copyright © 2017年 EarthIsm. All rights reserved.
//
/*
这是一个所有主义的父类，所有类都继承与此类
 */

#ifndef EarthIsm_hpp
#define EarthIsm_hpp

#include "Define.h"

class EarthIsm {
public:
    EarthIsm();
    ~EarthIsm();

public:
    //欺骗性(是所有派生类共有的属性）
    string getCheat();

private:
};

#endif /* EarthIsm_hpp */
