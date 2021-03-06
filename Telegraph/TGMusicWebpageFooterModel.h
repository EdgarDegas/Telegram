#import "TGWebpageFooterModel.h"

@class TGWebPageMediaAttachment;

@interface TGMusicWebpageFooterModel : TGWebpageFooterModel

- (instancetype)initWithContext:(TGModernViewContext *)context messageId:(int32_t)messageId incoming:(bool)incoming webPage:(TGWebPageMediaAttachment *)webPage hasViews:(bool)hasViews;

@end
