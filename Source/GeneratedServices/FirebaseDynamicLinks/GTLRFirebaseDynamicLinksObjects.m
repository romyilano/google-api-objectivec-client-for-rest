// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Dynamic Links API (firebasedynamiclinks/v1)
// Description:
//   Firebase Dynamic Links API enables third party developers to
//   programmatically create and manage Dynamic Links.
// Documentation:
//   https://firebase.google.com/docs/dynamic-links/

#import "GTLRFirebaseDynamicLinksObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRFirebaseDynamicLinks_DynamicLinkWarning.warningCode
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadAdParam = @"BAD_AD_PARAM";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadDebugParam = @"BAD_DEBUG_PARAM";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeAndroidFallbackLink = @"BAD_URI_SCHEME_ANDROID_FALLBACK_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeIosFallbackLink = @"BAD_URI_SCHEME_IOS_FALLBACK_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeIpadFallbackLink = @"BAD_URI_SCHEME_IPAD_FALLBACK_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeSocialImageLink = @"BAD_URI_SCHEME_SOCIAL_IMAGE_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeSocialUrl = @"BAD_URI_SCHEME_SOCIAL_URL";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_CodeUnspecified = @"CODE_UNSPECIFIED";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_DeprecatedParam = @"DEPRECATED_PARAM";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_LinkLengthTooLong = @"LINK_LENGTH_TOO_LONG";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_LinkWithFragments = @"LINK_WITH_FRAGMENTS";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectAndroidPackageName = @"NOT_IN_PROJECT_ANDROID_PACKAGE_NAME";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectIosBundleId = @"NOT_IN_PROJECT_IOS_BUNDLE_ID";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectIpadBundleId = @"NOT_IN_PROJECT_IPAD_BUNDLE_ID";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotIntegerAndroidPackageMinVersion = @"NOT_INTEGER_ANDROID_PACKAGE_MIN_VERSION";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotMatchingIosBundleIdAndStoreId = @"NOT_MATCHING_IOS_BUNDLE_ID_AND_STORE_ID";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotNumericIosAppStoreId = @"NOT_NUMERIC_IOS_APP_STORE_ID";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriAndroidFallbackLink = @"NOT_URI_ANDROID_FALLBACK_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriAndroidLink = @"NOT_URI_ANDROID_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriIosFallbackLink = @"NOT_URI_IOS_FALLBACK_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriIpadFallbackLink = @"NOT_URI_IPAD_FALLBACK_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriSocialImageLink = @"NOT_URI_SOCIAL_IMAGE_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriSocialUrl = @"NOT_URI_SOCIAL_URL";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_TooLongParam = @"TOO_LONG_PARAM";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryAndroidLink = @"UNNECESSARY_ANDROID_LINK";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryAndroidPackageMinVersion = @"UNNECESSARY_ANDROID_PACKAGE_MIN_VERSION";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryIosAppStoreId = @"UNNECESSARY_IOS_APP_STORE_ID";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryIosUrlScheme = @"UNNECESSARY_IOS_URL_SCHEME";
NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnrecognizedParam = @"UNRECOGNIZED_PARAM";

// GTLRFirebaseDynamicLinks_Suffix.option
NSString * const kGTLRFirebaseDynamicLinks_Suffix_Option_OptionUnspecified = @"OPTION_UNSPECIFIED";
NSString * const kGTLRFirebaseDynamicLinks_Suffix_Option_Short = @"SHORT";
NSString * const kGTLRFirebaseDynamicLinks_Suffix_Option_Unguessable = @"UNGUESSABLE";

// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_AnalyticsInfo
//

@implementation GTLRFirebaseDynamicLinks_AnalyticsInfo
@dynamic googlePlayAnalytics, itunesConnectAnalytics;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_AndroidInfo
//

@implementation GTLRFirebaseDynamicLinks_AndroidInfo
@dynamic androidFallbackLink, androidLink, androidMinPackageVersionCode,
         androidPackageName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_CreateShortDynamicLinkRequest
//

@implementation GTLRFirebaseDynamicLinks_CreateShortDynamicLinkRequest
@dynamic dynamicLinkInfo, longDynamicLink, suffix;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_CreateShortDynamicLinkResponse
//

@implementation GTLRFirebaseDynamicLinks_CreateShortDynamicLinkResponse
@dynamic previewLink, shortLink, warning;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"warning" : [GTLRFirebaseDynamicLinks_DynamicLinkWarning class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_DynamicLinkInfo
//

@implementation GTLRFirebaseDynamicLinks_DynamicLinkInfo
@dynamic analyticsInfo, androidInfo, dynamicLinkDomain, iosInfo, link,
         socialMetaTagInfo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_DynamicLinkWarning
//

@implementation GTLRFirebaseDynamicLinks_DynamicLinkWarning
@dynamic warningCode, warningMessage;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_GooglePlayAnalytics
//

@implementation GTLRFirebaseDynamicLinks_GooglePlayAnalytics
@dynamic gclid, utmCampaign, utmContent, utmMedium, utmSource, utmTerm;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_IosInfo
//

@implementation GTLRFirebaseDynamicLinks_IosInfo
@dynamic iosAppStoreId, iosBundleId, iosCustomScheme, iosFallbackLink,
         iosIpadBundleId, iosIpadFallbackLink;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_ITunesConnectAnalytics
//

@implementation GTLRFirebaseDynamicLinks_ITunesConnectAnalytics
@dynamic at, ct, mt, pt;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_SocialMetaTagInfo
//

@implementation GTLRFirebaseDynamicLinks_SocialMetaTagInfo
@dynamic socialDescription, socialImageLink, socialTitle;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseDynamicLinks_Suffix
//

@implementation GTLRFirebaseDynamicLinks_Suffix
@dynamic option;
@end
