#import <UIKit/UIKit.h>
#import <LanSongEditorFramework/LanSongEditor.h>

typedef enum {
    GPUIMAGE_SATURATION,
    GPUIMAGE_CONTRAST,
    GPUIMAGE_BRIGHTNESS,
    GPUIMAGE_LEVELS,
    GPUIMAGE_EXPOSURE,
    GPUIMAGE_HUE,
    GPUIMAGE_WHITEBALANCE,
    GPUIMAGE_MONOCHROME,
    GPUIMAGE_FALSECOLOR,
    GPUIMAGE_SHARPEN,
    GPUIMAGE_UNSHARPMASK,
    GPUIMAGE_TRANSFORM3D,
    GPUIMAGE_CROP,
    GPUIMAGE_MASK,
    GPUIMAGE_GAMMA,
    GPUIMAGE_TONECURVE,
    GPUIMAGE_HIGHLIGHTSHADOW,
    GPUIMAGE_HAZE,
    GPUIMAGE_SEPIA,
    GPUIMAGE_AMATORKA,
    GPUIMAGE_MISSETIKATE,
    GPUIMAGE_SOFTELEGANCE,
    GPUIMAGE_COLORINVERT,
    GPUIMAGE_GRAYSCALE,
    GPUIMAGE_HISTOGRAM,
    GPUIMAGE_HISTOGRAM_EQUALIZATION,
    GPUIMAGE_THRESHOLD,
    GPUIMAGE_ADAPTIVETHRESHOLD,
    GPUIMAGE_AVERAGELUMINANCETHRESHOLD,
    GPUIMAGE_PIXELLATE,
    GPUIMAGE_POLARPIXELLATE,
    GPUIMAGE_PIXELLATE_POSITION,
    GPUIMAGE_POLKADOT,
    GPUIMAGE_HALFTONE,
    GPUIMAGE_CROSSHATCH,
    GPUIMAGE_SOBELEDGEDETECTION,
    GPUIMAGE_PREWITTEDGEDETECTION,
    GPUIMAGE_CANNYEDGEDETECTION,
    GPUIMAGE_THRESHOLDEDGEDETECTION,
    GPUIMAGE_XYGRADIENT,
    GPUIMAGE_LOWPASS,
    GPUIMAGE_HIGHPASS,
    GPUIMAGE_SKETCH,
    GPUIMAGE_THRESHOLDSKETCH,
    GPUIMAGE_TOON,
    GPUIMAGE_SMOOTHTOON,
    GPUIMAGE_TILTSHIFT,
    GPUIMAGE_CGA,
    GPUIMAGE_POSTERIZE,
    GPUIMAGE_CONVOLUTION,
    GPUIMAGE_EMBOSS,
    GPUIMAGE_LAPLACIAN,
    GPUIMAGE_KUWAHARA,
    GPUIMAGE_KUWAHARARADIUS3,
    GPUIMAGE_VIGNETTE,
    GPUIMAGE_GAUSSIAN,
    GPUIMAGE_GAUSSIAN_SELECTIVE,
    GPUIMAGE_GAUSSIAN_POSITION,
    GPUIMAGE_BOXBLUR,
    GPUIMAGE_MEDIAN,
    GPUIMAGE_BILATERAL,
    GPUIMAGE_MOTIONBLUR,
    GPUIMAGE_ZOOMBLUR,
    GPUIMAGE_SWIRL,
    GPUIMAGE_BULGE,
    GPUIMAGE_PINCH,
    GPUIMAGE_STRETCH,
    GPUIMAGE_DILATION,
    GPUIMAGE_EROSION,
    GPUIMAGE_OPENING,
    GPUIMAGE_CLOSING,
    GPUIMAGE_PERLINNOISE,
    GPUIMAGE_VORONOI,
    GPUIMAGE_MOSAIC,
    GPUIMAGE_LOCALBINARYPATTERN,
    GPUIMAGE_DISSOLVE,
    GPUIMAGE_CHROMAKEY,
    GPUIMAGE_ADD,
    GPUIMAGE_DIVIDE,
    GPUIMAGE_MULTIPLY,
    GPUIMAGE_OVERLAY,
    GPUIMAGE_LIGHTEN,
    GPUIMAGE_DARKEN,
    GPUIMAGE_COLORBURN,
    GPUIMAGE_COLORDODGE,
    GPUIMAGE_LINEARBURN,
    GPUIMAGE_SCREENBLEND,
    GPUIMAGE_DIFFERENCEBLEND,
    GPUIMAGE_SUBTRACTBLEND,
    GPUIMAGE_EXCLUSIONBLEND,
    GPUIMAGE_HARDLIGHTBLEND,
    GPUIMAGE_SOFTLIGHTBLEND,
    GPUIMAGE_COLORBLEND,
    GPUIMAGE_HUEBLEND,
    GPUIMAGE_SATURATIONBLEND,
    GPUIMAGE_LUMINOSITYBLEND,
    GPUIMAGE_NORMALBLEND,
    GPUIMAGE_POISSONBLEND,
    GPUIMAGE_FILTERGROUP,
    GPUIMAGE_FACES,
    GPUIMAGE_NUMFILTERS
} GPUImageShowcaseFilterType;
@interface FilterTpyeList : UITableViewController

@property UISlider *filterSlider;

@property GPUImageOutput<GPUImageInput> *filter;


@property VideoPen *videoPen;
/**
 当slider滑动时调用这里,更改相关效果.
 */
- (void)updateFilterFromSlider:(UISlider *)sender;

@end
