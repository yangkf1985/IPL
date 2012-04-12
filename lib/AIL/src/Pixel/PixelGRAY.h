
#ifndef PIXEL__PixelGRAY_H
#define PIXEL__PixelGRAY_H

#include <AIL.h>
#include <Meta/TypeVector.h>
#include <Meta/Boolean.h>
#include "PixelDataType1.h"
#include "PixelRange.h"

namespace Pixel {

template <
	typename NumberType,
	typename PixelRangeType
> class PixelGRAYbaseType
	: public PixelDataType1<NumberType>
{
	public:

		typedef typename NumberType NumberType;
		typedef typename PixelRangeType RangeType;
		typedef PixelDataType1<NumberType> DataType;
		typedef PixelDataType1<NumberType> ParentType;
		typedef PixelGRAYbaseType<NumberType,PixelRangeType> ThisType;

		__forceinline explicit ThisType(){}
		__forceinline explicit ThisType(const NumberType &_scalar):ParentType(_scalar){}
		__forceinline ThisType(const DataType &_pixel):ParentType(_pixel){}
		__forceinline ThisType(const ThisType &_pixel):ParentType(_pixel){}
		
		__forceinline void setX(const NumberType & _x) {this->set<0>(_x);}

		__forceinline const NumberType &getX() const {return this->get<0>();}

};

typedef PixelGRAYbaseType<Meta::Boolean,PixelRange_1b1 > PixelGRAYbtd;
typedef PixelGRAYbaseType<I1u          ,PixelRange_1i1u> PixelGRAYi1utd;

class AIL_DLL_EXPORT PixelGRAYb : public PixelGRAYbtd {
	public:
		typedef Meta::Boolean NumberType;
		typedef PixelGRAYbtd::DataType DataType;
		typedef PixelRange_1b1 RangeType;
		typedef PixelGRAYbtd ParentType;
		typedef PixelGRAYb ThisType;

		__forceinline explicit ThisType(){}
		__forceinline explicit ThisType(const NumberType &_scalar):ParentType(_scalar){}
		__forceinline ThisType(const DataType &_pixel):ParentType(_pixel){}
		__forceinline ThisType(const ThisType &_pixel):ParentType(_pixel){}
};

//TODO: Move this to a seperate 'TestType' file ?
class BooleanTestType {
	public:
		static __forceinline Meta::Boolean isIncluded(const Pixel::PixelGRAYb &boolToTest){
			return boolToTest.getX();
		}
};

class AIL_DLL_EXPORT PixelGRAYi1u : public PixelGRAYi1utd {
	public:
		typedef I1u NumberType;
		typedef PixelGRAYi1utd::DataType DataType;
		typedef PixelRange_1i1u RangeType;
		typedef PixelGRAYi1utd ParentType;
		typedef PixelGRAYi1u ThisType;

		__forceinline explicit ThisType(){}
		__forceinline explicit ThisType(const NumberType &_scalar):ParentType(_scalar){}
		__forceinline ThisType(const DataType &_pixel):ParentType(_pixel){}
		__forceinline ThisType(const ThisType &_pixel):ParentType(_pixel){}
};

}


#endif