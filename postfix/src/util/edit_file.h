#ifndef _EDIT_FILE_H_INCLUDED_
#define _EDIT_FILE_H_INCLUDED_

/*++
/* NAME
/*	edit_file 3h
/* SUMMARY
/*	simple cooperative file updating protocol
/* SYNOPSIS
/*	#include <edit_file.h>
/* DESCRIPTION
/* .nf

 /*
  * Utility library.
  */
#include <vstream.h>

 /*
  * External interface.
  */
typedef struct {
    /* Private. */
    char   *final_path;
    mode_t  final_mode;
    /* Public. */
    char   *tmp_path;
    VSTREAM *tmp_fp;
} EDIT_FILE;

#define EDIT_FILE_SUFFIX ".tmp"

extern EDIT_FILE *edit_file_open(const char *, int, mode_t);
extern int WARN_UNUSED_RESULT edit_file_close(EDIT_FILE *);
extern void edit_file_cleanup(EDIT_FILE *);

/* LICENSE
/* .ad
/* .fi
/*	The Secure Mailer license must be distributed with this software.
/* AUTHOR(S)
/*	Wietse Venema
/*	IBM T.J. Watson Research
/*	P.O. Box 704
/*	Yorktown Heights, NY 10598, USA
/*
/*	Wietse Venema
/*	Google, Inc.
/*	111 8th Avenue
/*	New York, NY 10011, USA
/*--*/

#endif
