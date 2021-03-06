//
//  PPJordanIDCombinedRecognizerSettings.h
//  MicroBlinkDev
//
//  Created by Dino Gustin on 02/04/2018.
//

#import "PPCombinedRecognizerSettings.h"

/**
 * Settings class for configuring Jordan ID Combined Recognizer.
 *
 * Jordan Combined ID recognizer is used for scanning both front and back side of Jordan IDs.
 */
PP_CLASS_AVAILABLE_IOS(6.0)
@interface PPJordanIDCombinedRecognizerSettings : PPCombinedRecognizerSettings

/**
 * Name of the image sent to didOutputMetadata method of scanDelegate object that contains full document.
 * This image will be sent to scan delegate during recognition process if displaying of full document image
 * is enabled via displayFullDocumentImage property and receiving of dewarpedImage in MetadataSettings is enabled.
 */
+ (NSString *)FULL_DOCUMENT_IMAGE;

/**
 * Name of the image sent to didOutputMetadata method of scanDelegate object that contains face.
 * This image will be sent to scan delegate during recognition process if displaying of face image
 * is enabled via displayFaceImage property and receiving of dewarpedImage in MetadataSettings is enabled.
 */
+ (NSString *)ID_FACE;

/**
 * Sets whether full document image from Jordan ID should be sent to didOutputMetadata method of scanDelegate object.
 * If you want to recieve this image, be sure to enable dewarpedImage in MetadataSettings.
 *
 * Default: NO
 */
@property (nonatomic) BOOL displayFullDocumentImage;

/**
 * Sets whether full document image should be encoded in the result object returned by didOutputResult:
 *
 * Default: NO
 */
@property (nonatomic, assign) BOOL encodeFullDocument;

/**
 * Sets whether face image from Jordan ID should be sent to didOutputMetadata method of scanDelegate object.
 * If you want to recieve this image, be sure to enable dewarpedImage in MetadataSettings.
 *
 * Default: NO
 */
@property (nonatomic) BOOL displayFaceImage;

/**
 * Sets whether face image should be encoded in the result object returned by didOutputResult:
 *
 * Default: NO
 */
@property (nonatomic, assign) BOOL encodeFaceImage;


/**
 * Defines if glare detection should be turned on/off for front side of Jordan ID.
 *
 * Default: YES
 */
@property (nonatomic, assign) BOOL detectGlare;

@end
