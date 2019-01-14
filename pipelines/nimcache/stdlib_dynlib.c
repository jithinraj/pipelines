/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/usr/lib/nim -o /home/calebwin/Projects/pipelines/pipelines/nimcache/stdlib_dynlib.o /home/calebwin/Projects/pipelines/pipelines/nimcache/stdlib_dynlib.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <dlfcn.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};

N_NIMCALL(void*, loadLib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path, NIM_BOOL global_symbols) {
	void* result;
	NI flags;
{	result = (void*)0;
	flags = RTLD_NOW;
	{
		if (!global_symbols) goto LA3_;
		flags = (NI)(flags | RTLD_GLOBAL);
	}
	LA3_: ;
	result = dlopen(path->data, flags);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void*, symAddr_NHfjIU1Uh0ju9azgMjiSkQA)(void* lib, NCSTRING name) {
	void* result;
{	result = (void*)0;
	result = dlsym(lib, name);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void) {
}
