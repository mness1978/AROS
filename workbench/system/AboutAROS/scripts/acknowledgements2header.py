#!/bin/env python

import sys

print '''#ifndef _ACKNOWLEDGEMENTS_H_
#define _ACKNOWLEDGEMENTS_H_

/*
    Copyright � 2003, The AROS Development Team. All rights reserved.
    ****** This file is automatically generated. DO NOT EDIT! *******
*/

const char * const ACKNOWLEDGEMENTS[] =
{
'''

count = 0
for line in sys.stdin:
    print '    "%s",' % line.strip()
    count += 1
    
print '''};

#define ACKNOWLEDGEMENTS_SIZE (%d)

#endif /* _ACKNOWLEDGEMENTS_H_ */
''' % count
