
#ifndef FILTER__MinFilterWx1basicParametersType_H
#define FILTER__MinFilterWx1basicParametersType_H

#include <Algorithm/BasicWx1baseAlgorithmParametersType.h>

namespace Filter {

template <
	typename PixelDataType,
	typename PixelComputationType
> class MinFilterWx1basicParametersType
	: public Algorithm::BasicWx1baseAlgorithmParametersType
{
	public:

		MinFilterWx1basicParametersType(
			const I4 & _xOffset,
			const I4 & _filterWidth,
			const PixelComputationType & _maxPixel
		)
			:BasicWx1baseAlgorithmParametersType(
				_xOffset,
				_filterWidth
			)
			,maxPixel(_maxPixel)
		{
		}

		const PixelComputationType maxPixel;
};

}

#endif
