#ifndef LUMA_IMAGE_H
#define LUMA_IMAGE_H

namespace luma
{
	class Image
	{
	private:
		const std::uint32_t _width, _height;
		std::uint32_t* _data;

	public:
		Image(std::uint32_t, std::uint32_t) noexcept;

	public:
		void export_to(const std::string&) const noexcept;
	};
}

#endif