
//NOTE: NO HEADER GUARD ON PURPOSE!

#include "PixelTemplateMacros.h"

#ifdef ONLY_F

#ifdef FUNCTION_TEMPLATE_RETURN

	#ifdef FUNCTION_TEMPLATE_ARGUMENT_2

		template FUNCTION_RETURN < PIXEL_TYPE_F_1 > FUNCTION_NAME < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN < PIXEL_TYPE_F_2 > FUNCTION_NAME < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_3 ;

	#elif defined(FUNCTION_TEMPLATE_ARGUMENT_1)

		template FUNCTION_RETURN < PIXEL_TYPE_F_1 > FUNCTION_NAME < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN < PIXEL_TYPE_F_2 > FUNCTION_NAME < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_2 ;

	#else

		template FUNCTION_RETURN < PIXEL_TYPE_F_1 > FUNCTION_NAME < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN < PIXEL_TYPE_F_2 > FUNCTION_NAME < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE ;

	#endif

#else

	#ifdef FUNCTION_TEMPLATE_ARGUMENT_2

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_3 ;

	#elif defined(FUNCTION_TEMPLATE_ARGUMENT_1)

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE_2 ;

	#else

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_F_1 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_F_2 > FUNCTION_SIGNATURE ;

	#endif


#endif

#else

#ifdef FUNCTION_TEMPLATE_RETURN

	#ifdef FUNCTION_TEMPLATE_ARGUMENT_2

		template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_3 ;

	#elif defined(FUNCTION_TEMPLATE_ARGUMENT_1)

		template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;

	#else

		template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE ;

	#endif

#else

	#ifdef FUNCTION_TEMPLATE_ARGUMENT_2

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_3 ;

	#elif defined(FUNCTION_TEMPLATE_ARGUMENT_1)

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;

	#else

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE ;

	#endif


#endif


#endif