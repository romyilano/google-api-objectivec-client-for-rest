// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google People API (people/v1)
// Description:
//   The Google People API service gives access to information about profiles
//   and contacts.
// Documentation:
//   https://developers.google.com/people/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRPeople_Address;
@class GTLRPeople_Biography;
@class GTLRPeople_Birthday;
@class GTLRPeople_BraggingRights;
@class GTLRPeople_ContactGroupMembership;
@class GTLRPeople_CoverPhoto;
@class GTLRPeople_Date;
@class GTLRPeople_DomainMembership;
@class GTLRPeople_EmailAddress;
@class GTLRPeople_Event;
@class GTLRPeople_FieldMetadata;
@class GTLRPeople_Gender;
@class GTLRPeople_ImClient;
@class GTLRPeople_Interest;
@class GTLRPeople_Locale;
@class GTLRPeople_Membership;
@class GTLRPeople_Name;
@class GTLRPeople_Nickname;
@class GTLRPeople_Occupation;
@class GTLRPeople_Organization;
@class GTLRPeople_Person;
@class GTLRPeople_PersonMetadata;
@class GTLRPeople_PersonResponse;
@class GTLRPeople_PhoneNumber;
@class GTLRPeople_Photo;
@class GTLRPeople_Relation;
@class GTLRPeople_RelationshipInterest;
@class GTLRPeople_RelationshipStatus;
@class GTLRPeople_Residence;
@class GTLRPeople_Skill;
@class GTLRPeople_Source;
@class GTLRPeople_Tagline;
@class GTLRPeople_Url;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRPeople_Nickname.type

/** Value: "DEFAULT" */
GTLR_EXTERN NSString * const kGTLRPeople_Nickname_Type_Default;
/** Value: "GPLUS" */
GTLR_EXTERN NSString * const kGTLRPeople_Nickname_Type_Gplus;
/** Value: "INITIALS" */
GTLR_EXTERN NSString * const kGTLRPeople_Nickname_Type_Initials;
/** Value: "MAIDEN_NAME" */
GTLR_EXTERN NSString * const kGTLRPeople_Nickname_Type_MaidenName;
/** Value: "OTHER_NAME" */
GTLR_EXTERN NSString * const kGTLRPeople_Nickname_Type_OtherName;

// ----------------------------------------------------------------------------
// GTLRPeople_Person.ageRange

/** Value: "AGE_RANGE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPeople_Person_AgeRange_AgeRangeUnspecified;
/** Value: "EIGHTEEN_TO_TWENTY" */
GTLR_EXTERN NSString * const kGTLRPeople_Person_AgeRange_EighteenToTwenty;
/** Value: "LESS_THAN_EIGHTEEN" */
GTLR_EXTERN NSString * const kGTLRPeople_Person_AgeRange_LessThanEighteen;
/** Value: "TWENTY_ONE_OR_OLDER" */
GTLR_EXTERN NSString * const kGTLRPeople_Person_AgeRange_TwentyOneOrOlder;

// ----------------------------------------------------------------------------
// GTLRPeople_PersonMetadata.objectType

/** Value: "OBJECT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPeople_PersonMetadata_ObjectType_ObjectTypeUnspecified;
/** Value: "PAGE" */
GTLR_EXTERN NSString * const kGTLRPeople_PersonMetadata_ObjectType_Page;
/** Value: "PERSON" */
GTLR_EXTERN NSString * const kGTLRPeople_PersonMetadata_ObjectType_Person;

// ----------------------------------------------------------------------------
// GTLRPeople_Source.type

/** Value: "ACCOUNT" */
GTLR_EXTERN NSString * const kGTLRPeople_Source_Type_Account;
/** Value: "CONTACT" */
GTLR_EXTERN NSString * const kGTLRPeople_Source_Type_Contact;
/** Value: "DOMAIN_PROFILE" */
GTLR_EXTERN NSString * const kGTLRPeople_Source_Type_DomainProfile;
/** Value: "OTHER" */
GTLR_EXTERN NSString * const kGTLRPeople_Source_Type_Other;
/** Value: "PROFILE" */
GTLR_EXTERN NSString * const kGTLRPeople_Source_Type_Profile;

/**
 *  A person's physical address. May be a P.O. box or street address. All fields
 *  are optional.
 */
@interface GTLRPeople_Address : GTLRObject

/** The city of the address. */
@property(nonatomic, copy, nullable) NSString *city;

/** The country of the address. */
@property(nonatomic, copy, nullable) NSString *country;

/**
 *  The [ISO 3166-1 alpha-2](http://www.iso.org/iso/country_codes.htm) country
 *  code of the address.
 */
@property(nonatomic, copy, nullable) NSString *countryCode;

/** The extended address of the address; for example, the apartment number. */
@property(nonatomic, copy, nullable) NSString *extendedAddress;

/**
 *  The read-only type of the address translated and formatted in the viewer's
 *  account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/**
 *  The read-only value of the address formatted in the viewer's account locale
 *  or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedValue;

/** Metadata about the address. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The P.O. box of the address. */
@property(nonatomic, copy, nullable) NSString *poBox;

/** The postal code of the address. */
@property(nonatomic, copy, nullable) NSString *postalCode;

/** The region of the address; for example, the state or province. */
@property(nonatomic, copy, nullable) NSString *region;

/** The street address. */
@property(nonatomic, copy, nullable) NSString *streetAddress;

/**
 *  The type of the address. The type can be custom or predefined. Possible
 *  values include, but are not limited to, the following: * `home` * `work` *
 *  `other`
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  A person's short biography.
 */
@interface GTLRPeople_Biography : GTLRObject

/** Metadata about the biography. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The short biography. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's birthday. At least one of the `date` and `text` fields are
 *  specified. The `date` and `text` fields typically represent the same date,
 *  but are not guaranteed to.
 */
@interface GTLRPeople_Birthday : GTLRObject

/** The date of the birthday. */
@property(nonatomic, strong, nullable) GTLRPeople_Date *date;

/** Metadata about the birthday. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** A free-form string representing the user's birthday. */
@property(nonatomic, copy, nullable) NSString *text;

@end


/**
 *  A person's bragging rights.
 */
@interface GTLRPeople_BraggingRights : GTLRObject

/** Metadata about the bragging rights. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The bragging rights; for example, `climbed mount everest`. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A Google contact group membership.
 */
@interface GTLRPeople_ContactGroupMembership : GTLRObject

/**
 *  The contact group ID for the contact group membership. The contact group ID
 *  can be custom or predefined. Possible values include, but are not limited
 *  to, the following: * `myContacts` * `starred` * A numerical ID for
 *  user-created groups.
 */
@property(nonatomic, copy, nullable) NSString *contactGroupId;

@end


/**
 *  A person's cover photo. A large image shown on the person's profile page
 *  that represents who they are or what they care about.
 */
@interface GTLRPeople_CoverPhoto : GTLRObject

/**
 *  True if the cover photo is the default cover photo; false if the cover photo
 *  is a user-provided cover photo.
 *
 *  Remapped to 'defaultProperty' to avoid language reserved word 'default'.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *defaultProperty;

/** Metadata about the cover photo. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The URL of the cover photo. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Represents a whole calendar date, for example a date of birth. The time of
 *  day and time zone are either specified elsewhere or are not significant. The
 *  date is relative to the [Proleptic Gregorian
 *  Calendar](https://en.wikipedia.org/wiki/Proleptic_Gregorian_calendar). The
 *  day may be 0 to represent a year and month where the day is not significant.
 *  The year may be 0 to represent a month and day independent of year; for
 *  example, anniversary date.
 */
@interface GTLRPeople_Date : GTLRObject

/**
 *  Day of month. Must be from 1 to 31 and valid for the year and month, or 0 if
 *  specifying a year/month where the day is not significant.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *day;

/**
 *  Month of year. Must be from 1 to 12.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *month;

/**
 *  Year of date. Must be from 1 to 9999, or 0 if specifying a date without a
 *  year.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *year;

@end


/**
 *  A Google Apps Domain membership.
 */
@interface GTLRPeople_DomainMembership : GTLRObject

/**
 *  True if the person is in the viewer's Google Apps domain.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *inViewerDomain;

@end


/**
 *  A person's email address.
 */
@interface GTLRPeople_EmailAddress : GTLRObject

/**
 *  The read-only type of the email address translated and formatted in the
 *  viewer's account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/** Metadata about the email address. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The type of the email address. The type can be custom or predefined.
 *  Possible values include, but are not limited to, the following: * `home` *
 *  `work` * `other`
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The email address. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  An event related to the person.
 */
@interface GTLRPeople_Event : GTLRObject

/** The date of the event. */
@property(nonatomic, strong, nullable) GTLRPeople_Date *date;

/**
 *  The read-only type of the event translated and formatted in the viewer's
 *  account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/** Metadata about the event. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The type of the event. The type can be custom or predefined. Possible values
 *  include, but are not limited to, the following: * `anniversary` * `other`
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Metadata about a field.
 */
@interface GTLRPeople_FieldMetadata : GTLRObject

/**
 *  True if the field is the primary field; false if the field is a secondary
 *  field.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *primary;

/** The source of the field. */
@property(nonatomic, strong, nullable) GTLRPeople_Source *source;

/**
 *  True if the field is verified; false if the field is unverified. A verified
 *  field is typically a name, email address, phone number, or website that has
 *  been confirmed to be owned by the person.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *verified;

@end


/**
 *  A person's gender.
 */
@interface GTLRPeople_Gender : GTLRObject

/**
 *  The read-only value of the gender translated and formatted in the viewer's
 *  account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedValue;

/** Metadata about the gender. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The gender for the person. The gender can be custom or predefined. Possible
 *  values include, but are not limited to, the following: * `male` * `female` *
 *  `other` * `unknown`
 */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  GTLRPeople_GetPeopleResponse
 */
@interface GTLRPeople_GetPeopleResponse : GTLRObject

/** The response for each requested resource name. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_PersonResponse *> *responses;

@end


/**
 *  A person's instant messaging client.
 */
@interface GTLRPeople_ImClient : GTLRObject

/**
 *  The read-only protocol of the IM client formatted in the viewer's account
 *  locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedProtocol;

/**
 *  The read-only type of the IM client translated and formatted in the viewer's
 *  account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/** Metadata about the IM client. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The protocol of the IM client. The protocol can be custom or predefined.
 *  Possible values include, but are not limited to, the following: * `aim` *
 *  `msn` * `yahoo` * `skype` * `qq` * `googleTalk` * `icq` * `jabber` *
 *  `netMeeting`
 */
@property(nonatomic, copy, nullable) NSString *protocol;

/**
 *  The type of the IM client. The type can be custom or predefined. Possible
 *  values include, but are not limited to, the following: * `home` * `work` *
 *  `other`
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The user name used in the IM client. */
@property(nonatomic, copy, nullable) NSString *username;

@end


/**
 *  One of the person's interests.
 */
@interface GTLRPeople_Interest : GTLRObject

/** Metadata about the interest. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The interest; for example, `stargazing`. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  GTLRPeople_ListConnectionsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "connections" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPeople_ListConnectionsResponse : GTLRCollectionObject

/**
 *  The list of people that the requestor is connected to.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Person *> *connections;

/** The token that can be used to retrieve the next page of results. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/** The token that can be used to retrieve changes since the last request. */
@property(nonatomic, copy, nullable) NSString *nextSyncToken;

@end


/**
 *  A person's locale preference.
 */
@interface GTLRPeople_Locale : GTLRObject

/** Metadata about the locale. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The well-formed [IETF BCP 47](https://tools.ietf.org/html/bcp47) language
 *  tag representing the locale.
 */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's membership in a group.
 */
@interface GTLRPeople_Membership : GTLRObject

/** The contact group membership. */
@property(nonatomic, strong, nullable) GTLRPeople_ContactGroupMembership *contactGroupMembership;

/** The domain membership. */
@property(nonatomic, strong, nullable) GTLRPeople_DomainMembership *domainMembership;

/** Metadata about the membership. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

@end


/**
 *  A person's name. If the name is a mononym, the family name is empty.
 */
@interface GTLRPeople_Name : GTLRObject

/**
 *  The display name formatted according to the locale specified by the viewer's
 *  account or the Accept-Language HTTP header.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The family name. */
@property(nonatomic, copy, nullable) NSString *familyName;

/** The given name. */
@property(nonatomic, copy, nullable) NSString *givenName;

/** The honorific prefixes, such as `Mrs.` or `Dr.` */
@property(nonatomic, copy, nullable) NSString *honorificPrefix;

/** The honorific suffixes, such as `Jr.` */
@property(nonatomic, copy, nullable) NSString *honorificSuffix;

/** Metadata about the name. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The middle name(s). */
@property(nonatomic, copy, nullable) NSString *middleName;

/** The family name spelled as it sounds. */
@property(nonatomic, copy, nullable) NSString *phoneticFamilyName;

/** The given name spelled as it sounds. */
@property(nonatomic, copy, nullable) NSString *phoneticGivenName;

/** The honorific prefixes spelled as they sound. */
@property(nonatomic, copy, nullable) NSString *phoneticHonorificPrefix;

/** The honorific suffixes spelled as they sound. */
@property(nonatomic, copy, nullable) NSString *phoneticHonorificSuffix;

/** The middle name(s) spelled as they sound. */
@property(nonatomic, copy, nullable) NSString *phoneticMiddleName;

@end


/**
 *  A person's nickname.
 */
@interface GTLRPeople_Nickname : GTLRObject

/** Metadata about the nickname. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The type of the nickname.
 *
 *  Likely values:
 *    @arg @c kGTLRPeople_Nickname_Type_Default Value "DEFAULT"
 *    @arg @c kGTLRPeople_Nickname_Type_Gplus Value "GPLUS"
 *    @arg @c kGTLRPeople_Nickname_Type_Initials Value "INITIALS"
 *    @arg @c kGTLRPeople_Nickname_Type_MaidenName Value "MAIDEN_NAME"
 *    @arg @c kGTLRPeople_Nickname_Type_OtherName Value "OTHER_NAME"
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The nickname. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's occupation.
 */
@interface GTLRPeople_Occupation : GTLRObject

/** Metadata about the occupation. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The occupation; for example, `carpenter`. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's past or current organization. Overlapping date ranges are
 *  permitted.
 */
@interface GTLRPeople_Organization : GTLRObject

/**
 *  True if the organization is the person's current organization; false if the
 *  organization is a past organization.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *current;

/** The person's department at the organization. */
@property(nonatomic, copy, nullable) NSString *department;

/**
 *  The domain name associated with the organization; for example, `google.com`.
 */
@property(nonatomic, copy, nullable) NSString *domain;

/** The end date when the person left the organization. */
@property(nonatomic, strong, nullable) GTLRPeople_Date *endDate;

/**
 *  The read-only type of the organization translated and formatted in the
 *  viewer's account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/** The person's job description at the organization. */
@property(nonatomic, copy, nullable) NSString *jobDescription;

/** The location of the organization office the person works at. */
@property(nonatomic, copy, nullable) NSString *location;

/** Metadata about the organization. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The name of the organization. */
@property(nonatomic, copy, nullable) NSString *name;

/** The phonetic name of the organization. */
@property(nonatomic, copy, nullable) NSString *phoneticName;

/** The start date when the person joined the organization. */
@property(nonatomic, strong, nullable) GTLRPeople_Date *startDate;

/**
 *  The symbol associated with the organization; for example, a stock ticker
 *  symbol, abbreviation, or acronym.
 */
@property(nonatomic, copy, nullable) NSString *symbol;

/** The person's job title at the organization. */
@property(nonatomic, copy, nullable) NSString *title;

/**
 *  The type of the organization. The type can be custom or predefined. Possible
 *  values include, but are not limited to, the following: * `work` * `school`
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Information about a person merged from various data sources such as the
 *  authenticated user's contacts and profile data. Fields other than IDs,
 *  metadata, and group memberships are user-edited. Most fields can have
 *  multiple items. The items in a field have no guaranteed order, but each
 *  non-empty field is guaranteed to have exactly one field with
 *  `metadata.primary` set to true.
 */
@interface GTLRPeople_Person : GTLRObject

/** The person's street addresses. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Address *> *addresses;

/**
 *  The person's age range.
 *
 *  Likely values:
 *    @arg @c kGTLRPeople_Person_AgeRange_AgeRangeUnspecified Value
 *        "AGE_RANGE_UNSPECIFIED"
 *    @arg @c kGTLRPeople_Person_AgeRange_EighteenToTwenty Value
 *        "EIGHTEEN_TO_TWENTY"
 *    @arg @c kGTLRPeople_Person_AgeRange_LessThanEighteen Value
 *        "LESS_THAN_EIGHTEEN"
 *    @arg @c kGTLRPeople_Person_AgeRange_TwentyOneOrOlder Value
 *        "TWENTY_ONE_OR_OLDER"
 */
@property(nonatomic, copy, nullable) NSString *ageRange;

/** The person's biographies. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Biography *> *biographies;

/** The person's birthdays. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Birthday *> *birthdays;

/** The person's bragging rights. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_BraggingRights *> *braggingRights;

/** The person's cover photos. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_CoverPhoto *> *coverPhotos;

/** The person's email addresses. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_EmailAddress *> *emailAddresses;

/**
 *  The [HTTP entity tag](https://en.wikipedia.org/wiki/HTTP_ETag) of the
 *  resource. Used for web cache validation.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/** The person's events. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Event *> *events;

/** The person's genders. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Gender *> *genders;

/** The person's instant messaging clients. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_ImClient *> *imClients;

/** The person's interests. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Interest *> *interests;

/** The person's locale preferences. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Locale *> *locales;

/** The person's group memberships. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Membership *> *memberships;

/** Metadata about the person. */
@property(nonatomic, strong, nullable) GTLRPeople_PersonMetadata *metadata;

/** The person's names. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Name *> *names;

/** The person's nicknames. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Nickname *> *nicknames;

/** The person's occupations. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Occupation *> *occupations;

/** The person's past or current organizations. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Organization *> *organizations;

/** The person's phone numbers. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_PhoneNumber *> *phoneNumbers;

/** The person's photos. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Photo *> *photos;

/** The person's relations. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Relation *> *relations;

/** The kind of relationship the person is looking for. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_RelationshipInterest *> *relationshipInterests;

/** The person's relationship statuses. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_RelationshipStatus *> *relationshipStatuses;

/** The person's residences. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Residence *> *residences;

/**
 *  The resource name for the person, assigned by the server. An ASCII string
 *  with a max length of 27 characters. Always starts with `people/`.
 */
@property(nonatomic, copy, nullable) NSString *resourceName;

/** The person's skills. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Skill *> *skills;

/** The person's taglines. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Tagline *> *taglines;

/** The person's associated URLs. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Url *> *urls;

@end


/**
 *  Metadata about a person.
 */
@interface GTLRPeople_PersonMetadata : GTLRObject

/**
 *  True if the person resource has been deleted. Populated only for
 *  [`connections.list`](/people/api/rest/v1/people.connections/list) requests
 *  that include a sync token.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deleted;

/**
 *  The type of the person object.
 *
 *  Likely values:
 *    @arg @c kGTLRPeople_PersonMetadata_ObjectType_ObjectTypeUnspecified Value
 *        "OBJECT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRPeople_PersonMetadata_ObjectType_Page Value "PAGE"
 *    @arg @c kGTLRPeople_PersonMetadata_ObjectType_Person Value "PERSON"
 */
@property(nonatomic, copy, nullable) NSString *objectType;

/**
 *  Any former resource names this person has had. Populated only for
 *  [`connections.list`](/people/api/rest/v1/people.connections/list) requests
 *  that include a sync token. The resource name may change when adding or
 *  removing fields that link a contact and profile such as a verified email,
 *  verified phone number, or profile URL.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *previousResourceNames;

/** The sources of data for the person. */
@property(nonatomic, strong, nullable) NSArray<GTLRPeople_Source *> *sources;

@end


/**
 *  The response for a single person
 */
@interface GTLRPeople_PersonResponse : GTLRObject

/**
 *  [HTTP 1.1 status
 *  code](http://www.w3.org/Protocols/rfc2616/rfc2616-sec10.html).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *httpStatusCode;

/** The person. */
@property(nonatomic, strong, nullable) GTLRPeople_Person *person;

/**
 *  The original requested resource name. May be different than the resource
 *  name on the returned person. The resource name can change when adding or
 *  removing fields that link a contact and profile such as a verified email,
 *  verified phone number, or a profile URL.
 */
@property(nonatomic, copy, nullable) NSString *requestedResourceName;

@end


/**
 *  A person's phone number.
 */
@interface GTLRPeople_PhoneNumber : GTLRObject

/**
 *  The read-only canonicalized [ITU-T
 *  E.164](https://law.resource.org/pub/us/cfr/ibr/004/itu-t.E.164.1.2008.pdf)
 *  form of the phone number.
 */
@property(nonatomic, copy, nullable) NSString *canonicalForm;

/**
 *  The read-only type of the phone number translated and formatted in the
 *  viewer's account locale or the the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/** Metadata about the phone number. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The type of the phone number. The type can be custom or predefined. Possible
 *  values include, but are not limited to, the following: * `home` * `work` *
 *  `mobile` * `homeFax` * `workFax` * `otherFax` * `pager` * `workMobile` *
 *  `workPager` * `main` * `googleVoice` * `other`
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The phone number. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's photo. A picture shown next to the person's name to help others
 *  recognize the person.
 */
@interface GTLRPeople_Photo : GTLRObject

/** Metadata about the photo. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The URL of the photo. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  A person's relation to another person.
 */
@interface GTLRPeople_Relation : GTLRObject

/**
 *  The type of the relation translated and formatted in the viewer's account
 *  locale or the locale specified in the Accept-Language HTTP header.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/** Metadata about the relation. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The name of the other person this relation refers to. */
@property(nonatomic, copy, nullable) NSString *person;

/**
 *  The person's relation to the other person. The type can be custom or
 *  predefined. Possible values include, but are not limited to, the following
 *  values: * `spouse` * `child` * `mother` * `father` * `parent` * `brother` *
 *  `sister` * `friend` * `relative` * `domesticPartner` * `manager` *
 *  `assistant` * `referredBy` * `partner`
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  The kind of relationship the person is looking for.
 */
@interface GTLRPeople_RelationshipInterest : GTLRObject

/**
 *  The value of the relationship interest translated and formatted in the
 *  viewer's account locale or the locale specified in the Accept-Language HTTP
 *  header.
 */
@property(nonatomic, copy, nullable) NSString *formattedValue;

/** Metadata about the relationship interest. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The kind of relationship the person is looking for. The value can be custom
 *  or predefined. Possible values include, but are not limited to, the
 *  following values: * `friend` * `date` * `relationship` * `networking`
 */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's relationship status.
 */
@interface GTLRPeople_RelationshipStatus : GTLRObject

/**
 *  The read-only value of the relationship status translated and formatted in
 *  the viewer's account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedValue;

/** Metadata about the relationship status. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The relationship status. The value can be custom or predefined. Possible
 *  values include, but are not limited to, the following: * `single` *
 *  `inARelationship` * `engaged` * `married` * `itsComplicated` *
 *  `openRelationship` * `widowed` * `inDomesticPartnership` * `inCivilUnion`
 */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's past or current residence.
 */
@interface GTLRPeople_Residence : GTLRObject

/**
 *  True if the residence is the person's current residence; false if the
 *  residence is a past residence.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *current;

/** Metadata about the residence. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The address of the residence. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A skill that the person has.
 */
@interface GTLRPeople_Skill : GTLRObject

/** Metadata about the skill. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The skill; for example, `underwater basket weaving`. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  The source of a field.
 */
@interface GTLRPeople_Source : GTLRObject

/**
 *  A unique identifier within the source type generated by the server.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The source type.
 *
 *  Likely values:
 *    @arg @c kGTLRPeople_Source_Type_Account Value "ACCOUNT"
 *    @arg @c kGTLRPeople_Source_Type_Contact Value "CONTACT"
 *    @arg @c kGTLRPeople_Source_Type_DomainProfile Value "DOMAIN_PROFILE"
 *    @arg @c kGTLRPeople_Source_Type_Other Value "OTHER"
 *    @arg @c kGTLRPeople_Source_Type_Profile Value "PROFILE"
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  A brief one-line description of the person.
 */
@interface GTLRPeople_Tagline : GTLRObject

/** Metadata about the tagline. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/** The tagline. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A person's associated URLs.
 */
@interface GTLRPeople_Url : GTLRObject

/**
 *  The read-only type of the URL translated and formatted in the viewer's
 *  account locale or the `Accept-Language` HTTP header locale.
 */
@property(nonatomic, copy, nullable) NSString *formattedType;

/** Metadata about the URL. */
@property(nonatomic, strong, nullable) GTLRPeople_FieldMetadata *metadata;

/**
 *  The type of the URL. The type can be custom or predefined. Possible values
 *  include, but are not limited to, the following: * `home` * `work` * `blog` *
 *  `profile` * `homePage` * `ftp` * `reservations` * `appInstallPage`: website
 *  for a Google+ application. * `other`
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The URL. */
@property(nonatomic, copy, nullable) NSString *value;

@end

NS_ASSUME_NONNULL_END
