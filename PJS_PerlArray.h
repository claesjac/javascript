/*!
    @header PJS_PerlArray.h
    @abstract Types and functions related the JS native class PerlArray
*/

#ifndef __PJS_PERLARRAY_H__
#define __PJS_PERLARRAY_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "EXTERN.h"
#include "perl.h"

#include "JavaScript_Env.h"

#include "PJS_Types.h"
#include "PJS_Common.h"

/*! @struct     PJS_PerlArray
    @abstract   This type maps Perl subroutines to JavaScript functions by name
    @discussion A linked list of these structures are maintained by each context.
                In the future this should change to a HV *.
*/
struct PJS_PerlArray {
	AV *av;
};

PJS_EXTERN PJS_PerlArray *
PJS_NewPerlArray();
	
/*! @function PJS_InitPerlArrayClass
    @abstract Initiailizes the Perl array class
    @param pcx The context to init the class in
	@param global The global object for the context
*/
PJS_EXTERN JSObject *
PJS_InitPerlArrayClass(PJS_Context *pcx, JSObject *global);
	
#ifdef __cplusplus
}
#endif

#endif
