#ifndef COM_EXAMPLE_SUJOY_JNI_IMAGEUTILS_RGB2YUV_H_
#define COM_EXAMPLE_SUJOY_JNI_IMAGEUTILS_RGB2YUV_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void ConvertARGB8888ToYUV420SP(const uint32_t* const input,
                               uint8_t* const output, int width, int height);

void ConvertRGB565ToYUV420SP(const uint16_t* const input, uint8_t* const output,
                             const int width, const int height);

#ifdef __cplusplus
}
#endif

#endif  // ORG_TENSORFLOW_JNI_IMAGEUTILS_RGB2YUV_H_
