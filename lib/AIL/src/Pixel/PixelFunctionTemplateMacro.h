
//NOTE: NO HEADER GUARD ON PURPOSE! - This file is designed to be included multiple times

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
		template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_3 ;

	#elif defined(FUNCTION_TEMPLATE_ARGUMENT_1)

		#ifdef FUNCTION_DOUBLE_TEMPLATE

			template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 , PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 , PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 , PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 , PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 , PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 ;
			
			template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 , PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 , PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 , PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 , PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 , PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 ;

			template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 , PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 , PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 , PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 , PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 , PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 ;

			template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 , PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 , PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 , PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 , PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 , PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 ;

			template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 , PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 , PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 , PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 , PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 , PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 ;

		#else

			template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 ;
			template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 ;

		#endif
	#else

		template FUNCTION_RETURN < PIXEL_TYPE_1 > FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN < PIXEL_TYPE_2 > FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN < PIXEL_TYPE_3 > FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN < PIXEL_TYPE_4 > FUNCTION_NAME < PIXEL_TYPE_4 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN < PIXEL_TYPE_5 > FUNCTION_NAME < PIXEL_TYPE_5 > FUNCTION_SIGNATURE ;

	#endif

#else

	#ifdef FUNCTION_TEMPLATE_ARGUMENT_2

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_3 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_3 ;

	#elif defined(FUNCTION_TEMPLATE_ARGUMENT_1)

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_1 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_2 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_3 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_4 > FUNCTION_SIGNATURE_2 ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_1 < PIXEL_TYPE_5 > FUNCTION_SIGNATURE_2 ;

	#else

		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_1 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_2 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_3 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_4 > FUNCTION_SIGNATURE ;
		template FUNCTION_RETURN FUNCTION_NAME < PIXEL_TYPE_5 > FUNCTION_SIGNATURE ;

	#endif


#endif


#endif

#undef ONLY_F
#undef FUNCTION_TEMPLATE_ARGUMENT_1
#undef FUNCTION_TEMPLATE_ARGUMENT_2
#undef FUNCTION_DOUBLE_TEMPLATE
#undef FUNCTION_TEMPLATE_RETURN
#undef FUNCTION_RETURN
#undef FUNCTION_NAME
#undef FUNCTION_SIGNATURE
#undef FUNCTION_SIGNATURE_1
#undef FUNCTION_SIGNATURE_2
