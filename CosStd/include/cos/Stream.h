#ifndef COS_STREAM_H
#define COS_STREAM_H

/*
 o---------------------------------------------------------------------o
 |
 | COS Stream
 |
 o---------------------------------------------------------------------o
 |
 | C Object System
 |
 | Copyright (c) 2006+ Laurent Deniau, laurent.deniau@cern.ch
 |
 | For more information, see:
 | http://cern.ch/laurent.deniau/cos.html
 |
 o---------------------------------------------------------------------o
 |
 | This file is part of the C Object System framework.
 |
 | The C Object System is free software; you can redistribute it and/or
 | modify it under the terms of the GNU Lesser General Public License
 | as published by the Free Software Foundation; either version 3 of
 | the License, or (at your option) any later version.
 |
 | The C Object System is distributed in the hope that it will be
 | useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 | of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 |
 | See <http://www.gnu.org/licenses> for more details.
 |
 o---------------------------------------------------------------------o
 |
 | $Id: Stream.h,v 1.1 2009/09/14 13:35:13 ldeniau Exp $
 |
*/

#include <cos/Object.h>

/* NOTE-USER: Stream subclasses

<- Stream
  <- File
  <- Socket
  <- FullDuplexStream
    <- Process
*/

defclass(Stream)
endclass

#endif // COS_STREAM_H