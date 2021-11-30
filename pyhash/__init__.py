#!/usr/bin/env python
# -*- coding: utf-8 -*-
from __future__ import unicode_literals

import sys
import inspect

import _pyhash

__is_little_endian__ = sys.byteorder == 'little'

_MSC_VER = _pyhash.__dict__.get('_MSC_VER')
_GCC_VER = _pyhash.__dict__.get('_GCC_VER')
_CLANG_VER = _pyhash.__dict__.get('_CLANG_VER')
__VERSION__ = _pyhash.__dict__.get('__VERSION__')

build_with_sse42 = _pyhash.build_with_sse42
build_with_int128 = _pyhash.build_with_int128

city_32 = _pyhash.city_32
city_64 = _pyhash.city_64
city_128 = _pyhash.__dict__.get('city_128')
city_crc_128 = _pyhash.__dict__.get('city_crc_128')
city_fingerprint_256 = _pyhash.__dict__.get('city_fingerprint_256')

__hasher__ = dict(inspect.getmembers(sys.modules[__name__], inspect.isclass))
