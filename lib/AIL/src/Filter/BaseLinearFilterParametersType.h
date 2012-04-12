
#ifndef FILTER__BASE_LINEAR_FILTER_PARAMETERS_TYPE_H
#define FILTER__BASE_LINEAR_FILTER_PARAMETERS_TYPE_H

#include "SimpleWxHdataOperationParametersType.h"
#include "BaseLinearFilter.h"

namespace Filter {

template <
	typename PixelType
> class BaseLinearFilterParametersType
	: public SimpleWxHdataOperationParametersType<PixelType>
{
	public:

		BaseLinearFilterParametersType(
			const Image::ImageView<PixelType> &_filter,
			const long &_xOffset,
			const long &_yOffset,
			const long &_srcImageWidth,
			const PixelType _totalColor,
			const PixelType _minPixel
		)
			:SimpleWxHdataOperationParametersType<PixelType>(
				_filter,
				_xOffset,
				_yOffset,
				_srcImageWidth
			)
			,totalColor(_totalColor)
			,minPixel(_minPixel)
		{
		}

		const PixelType totalColor;
		const PixelType minPixel;
};

}

#endif