/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  FastAlloc.h:  Optimized Allocation

  Copyright (c) 2001-2007, Hugh Bailey
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
      * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
      * The name of Hugh Bailey may not be used to endorse or promote
        products derived from this software without specific prior written
        permission.

  THIS SOFTWARE IS PROVIDED BY HUGH BAILEY "AS IS" AND ANY
  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED.  IN NO EVENT SHALL HUGH BAILEY BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUISNESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

  Blah blah blah blah.  To the fricken' code already!
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


#ifndef FASTALLOC_HEADER
#define FASTALLOC_HEADER





class BASE_EXPORT FastAlloc : public Alloc
{
public:
    FastAlloc();
    virtual ~FastAlloc();

    virtual void * _Allocate(size_t dwSize);

    virtual void * _ReAllocate(LPVOID lpData, size_t dwSize);

    virtual void   _Free(LPVOID lpData);

    virtual size_t GetCurrentMemoryUsage();

    virtual void   ErrorTermination();

private:
    HANDLE hAllocationMutex;
};



#endif


