/*!
 *  \~chinese
 *  @header PTCommandCommon.h
 *  @abstract 公共指令
 *
 *  \~english
 *  @header PTCommandCommon.h
 *  @abstract Common Command
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PTCommandCommon : NSObject

@property(nonatomic, strong) NSMutableData * _Nonnull cmdData;

/*!
 *  \~chinese
 *
 *  获取打印机型号,回的数据格式：51333142 5400，最后一个字节00前面的是有效数据
 *
 *  \~english
 *
 *  Get printer model,eg:51333142 5400,The last byte 00 is preceded by valid data
 *
 */
- (void)getPrinterModelName;


@end

NS_ASSUME_NONNULL_END
