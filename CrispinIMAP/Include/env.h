/* Copyright (c) 2017, Computer History Museum All rights reserved. Redistribution and use in source and binary forms, with or without modification, are permitted (subject to the limitations in the disclaimer below) provided that the following conditions are met:  * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.  * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following    disclaimer in the documentation and/or other materials provided with the distribution.  * Neither the name of Computer History Museum nor the names of its contributors may be used to endorse or promote products    derived from this software without specific prior written permission. NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */#ifndef ENV_H#define ENV_H/* * Program:	Environment routines * * Author:	Mark Crispin *		Networks and Distributed Computing *		Computing & Communications *		University of Washington *		Administration Building, AG-44 *		Seattle, WA  98195 *		Internet: MRC@CAC.Washington.EDU * * Date:	1 August 1988 * Last Edited:	17 September 1996 * * Copyright 1995 by the University of Washington * *  Permission to use, copy, modify, and distribute this software and its * documentation for any purpose and without fee is hereby granted, provided * that the above copyright notice appears in all copies and that both the * above copyright notice and this permission notice appear in supporting * documentation, and that the name of the University of Washington not be * used in advertising or publicity pertaining to distribution of the software * without specific, written prior permission.  This software is made available * "as is", and * THE UNIVERSITY OF WASHINGTON DISCLAIMS ALL WARRANTIES, EXPRESS OR IMPLIED, * WITH REGARD TO THIS SOFTWARE, INCLUDING WITHOUT LIMITATION ALL IMPLIED * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, AND IN * NO EVENT SHALL THE UNIVERSITY OF WASHINGTON BE LIABLE FOR ANY SPECIAL, * INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, TORT * (INCLUDING NEGLIGENCE) OR STRICT LIABILITY, ARISING OUT OF OR IN CONNECTION * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. * *//* Function prototypes */void *env_parameters (long function,void *value);void rfc822_date (char *date);void rfc822_timezone (char *s,void *t);void internal_date (char *date);void server_traps (void *clkint,void *kodint,void *hupint,void *trmint);long server_login (char *user,char *pass,int argc,char *argv[]);char *mylocalhost (void);char *myhomedir (void);char *mailboxfile (char *dst,char *name);#endif //ENC_H