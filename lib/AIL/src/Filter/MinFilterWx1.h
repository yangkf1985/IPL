

#ifndef FILTER__MinFilterWx1_H
#define FILTER__MinFilterWx1_H

#include "BaseMinFilter.h"

namespace Filter {

template <
	typename PixelType = Image::ImageBase::DefaultPixelType
> class MinFilterWx1
	: public BaseMinFilter<PixelType>
{

	public:
		MinFilterWx1(Image::Image<Pixel::PixelGRAYb> &&_filterData)
			:BaseMinFilter<PixelType>(Meta::forward(_filterData))
		{
		};

		void applyTo(const Image::Image<PixelType> &srcImage,Image::Image<PixelType> &dstImage) const ;

};

}

#endif