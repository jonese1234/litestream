/*
 * Copyright (C) 2000 Gene Kan.  All rights reserved.  genehkan@xcf.berkeley.edu
 * Copyright (C) 2002 Litestream.org: 
 *                    Rick Bradley (rick@rickbradley.com), 
 *                    Sean Jewett  (sean@rimboy.com),
 *                    Brandon D. Valentine (brandon@dvalentine.com).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. The names Gene Kan, Litestream.org, Rick Bradley, Sean Jewett, or
 *    Brandon D. Valentine may not be used to endorse products derived
 *    from this software or portions of this software without specific
 *    prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY GENE KAN, LITESTREAM.ORG, RICK BRADLEY,
 * SEAN JEWETT, AND BRANDON D. VALENTINE ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE PROVIDERS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE OR
 * PORTIONS OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * $Id: stream_std.h,v 1.2 2003/03/21 02:05:40 bandix Exp $
 */


#ifndef STREAM_STD_H

#define STREAM_STD_H

void stream_openlog (const char* _ident);
void stream_closelog (void);
void stream_log (const char* _s, ...);

#define stream_err(msg) stream_log("%s:%d: %s: '%s': %s (%d)", __FILE__, __LINE__, __FUNCTION__, msg, strerror(errno), errno)
#define stream_msg(msg) stream_log("%s:%d: %s: '%s'", __FILE__, __LINE__, __FUNCTION__, msg)

#define MAX_MSGLEN 4096

#endif
