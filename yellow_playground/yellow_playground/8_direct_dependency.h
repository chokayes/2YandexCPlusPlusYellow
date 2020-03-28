//
//  8_direct_dependency.h
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/16/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#pragma once

#include "7_direct_and_indirect_dependency.h"

int doubleSum(int a, int b) {
    return dependencySum(a, b) + dependencySum(a, b);
}
